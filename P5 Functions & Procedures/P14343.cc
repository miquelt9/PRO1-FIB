#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Alumnesolucio {
    string dni;
    int nenvverd;
    int nexverd;
    int nexverm;
    int intents;
};
    
struct Enviament {
         string dni;
         string exer;
         int temps;
         string res;
     };

typedef vector<Enviament> Historia;
typedef vector<Alumnesolucio> Candidats; 

void llegeix(Historia& dades){
    for(int i = 0; i < dades.size(); ++i){
        cin >> dades[i].dni >> dades[i].exer >> dades[i].temps >> dades[i].res;
    }
}

bool comp(Enviament& a,Enviament& b){ 
    if (a.dni == b.dni) return a.exer < b.exer;
    else return a.dni < b.dni;
}

void afegiralumne (Candidats& cand, string dni, int var1, int var2, int var3, int var4){
            Alumnesolucio newalumne;
                newalumne.dni = dni;
                newalumne.nenvverd = var1;
                newalumne.nexverd = var2;
                newalumne.nexverm = var3;
                newalumne.intents = var4;
            cand.push_back(newalumne);
}


bool mesenvverds(Alumnesolucio& a, Alumnesolucio& b){
    if(a.nenvverd == b.nenvverd) return a.dni < b.dni;
    return a.nenvverd > b.nenvverd;
}

bool mesexverd (Alumnesolucio& a, Alumnesolucio& b){
    if(a.nexverd == b.nexverd) return a.dni < b.dni;
    return a.nexverd > b.nexverd;
}


bool mesexverm (Alumnesolucio& a, Alumnesolucio& b){
    if(a.nexverm == b.nexverm) return a.dni < b.dni;
    return a.nexverm > b.nexverm;
}

bool mesintents(Alumnesolucio& a, Alumnesolucio& b){
    if(a.intents == b.intents) return a.dni < b.dni;
    return a.intents > b.intents;
}

bool ultimintent (Enviament& a, Enviament& b){
    return a.temps > b.temps;
}
    

void calcres (Historia& hist, Candidats& cand){
    int i = 0;
    while (i < hist.size()){                   
         string alumne = hist[i].dni;
         int var_nenvverd = 0;
         int var_nexverd = 0;
         int var_nexverm = 0;
         int var_intents = 0;
         
        while(i < hist.size() and hist[i].dni == alumne){                   //NO repetir alummne
            string exercici = hist[i].exer;
            bool exverm = false;
            bool exverd = false;
            bool exgroc = false;
               
            while (i < hist.size() and hist[i].exer == exercici and hist[i].dni == alumne){   //No repetir l'exercici (gracies al soft)     
                if(hist[i].res == "vermell") exverm = true;        
                if(hist[i].res == "verd") {
                    exverd = true;
                    ++var_nenvverd;
                }
                if(hist[i].res == "groc") exgroc = true;
                ++i;
            }
            if(exverd) ++var_nexverd;
            if(exverm and not exverd and not exgroc) ++var_nexverm;
            ++var_intents;
           
            afegiralumne(cand, alumne, var_nenvverd, var_nexverd, var_nexverm, var_intents);
        }
    }
}


void output(Candidats& cand, Historia& hist){
    sort(cand.begin(), cand.end(), mesenvverds);
    if(hist.size() == 0 or cand[0].nenvverd == 0) cout <<"alumne amb mes enviaments verds:     -" << endl;
    else cout << "alumne amb mes enviaments verds:     " << cand[0].dni << " (" <<  cand[0].nenvverd << ")" << endl; 
    
    sort(cand.begin(), cand.end(), mesexverd);
    if(hist.size() == 0 or cand[0].nexverd == 0) cout <<"alumne amb mes exercicis verds:      -" << endl;
    else cout << "alumne amb mes exercicis verds:      " << cand[0].dni << " (" <<  cand[0].nexverd << ")" << endl; 
    
    sort(cand.begin(), cand.end(), mesexverm);
    if(hist.size() == 0 or cand[0].nexverm == 0) cout <<"alumne amb mes exercicis vermells:   -" << endl;
    else cout << "alumne amb mes exercicis vermells:   " << cand[0].dni << " (" <<  cand[0].nexverm << ")" << endl; 
    
    sort(cand.begin(), cand.end(), mesintents);
    if(hist.size() == 0 or cand[0].intents == 0) cout <<"alumne amb mes exercicis intentats:  -" << endl;
    else cout << "alumne amb mes exercicis intentats:  " << cand[0].dni << " (" <<  cand[0].intents << ")" << endl; 
    
    sort(hist.begin(), hist.end(), ultimintent);
    if (hist.size() == 0) cout << "alumne que ha fet l'ultim enviament: -" << endl;
    else cout << "alumne que ha fet l'ultim enviament: " << hist[0].dni << endl;
    
}
    
int main () {
    int n;
    cin >> n;
    Historia hist(n);
    Candidats cand;
    if (n > 0){
    llegeix(hist);
    sort(hist.begin(), hist.end(), comp);
    calcres (hist, cand);
    }
    output (cand,hist);
}
