#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Enviament{
    string dni;
    string exer;
    int temps;
    string res;
};

struct Resultat{
    string dni;
    int n_vegades;
};

typedef vector<Enviament> Historia;


void llegeix(Enviament& dades){
    cin >> dades.dni >> dades.exer >> dades.temps >> dades.res;
}

void escriu(Historia& dades){
    int n = dades.size();
    for(int i = 0; i < n; ++i){
        cout << dades[i].dni << dades[i].exer << dades[i].temps << dades[i].res << endl;
    }
}

void escriu(Enviament& dada){
    cout << dada.dni << dada.exer << dada.temps << dada.res << endl;
}

void escriu(Resultat& dada){
    cout << dada.dni << " " << dada.n_vegades << endl;
}

bool ordre_cronologic(const Enviament &a, const Enviament &b){
    return a.temps < b.temps;
}

bool ordre_dni(const Enviament &a, const Enviament &b){
    return a.dni < b.dni;
}

bool ordre_exer(const Enviament &a, const Enviament &b){
    return a.exer > b.exer;
}

bool ordre_res(const Enviament &a, const Enviament &b){
    return a.res < b.res;
}

/*bool alumne_inside(string& dni, Historia& dades){
    for(int i = 0; i < int(dades.size()); ++i){
        if(dades[i].dni == dni) return true;
    }
    return false;
}

Historia historial_verds(Historia& dades){
    Historia verds;
    for(int i = 0; i < int(dades.size()); ++i){
        if(dades[i].res == "verd") verds.push_back(dades[i]);
    }
    return verds;
}

Historia historial_vermells(Historia& dades){
    Historia verds;
    for(int i = 0; i < int(dades.size()); ++i){
        if(dades[i].res == "vermell") verds.push_back(dades[i]);
    }
    return verds;
}*/

void setup(Resultat& r, Resultat& actual)
{
    r.dni = "";
    r.n_vegades = 0;
    actual.dni = "a";
    actual.n_vegades = 0;
}

void nou_usuari_trobat(Resultat& r, Resultat& actual, const string& dni)
{
    if(dni != actual.dni)
    {
        if(actual.n_vegades > r.n_vegades)
        {
            r = actual;
        }
        actual.dni = dni;
        actual.n_vegades = 0;
    }
}

Resultat usuari_mes_verd(Historia& dades)
{
    Resultat r;
    Resultat actual;
    setup(r, actual);
    r.dni = dades[0].dni;
    /*for(int i = 0; i < (int)dades.size(); ++i)
    {
        nou_usuari_trobat(r, actual, dades[i].dni);
        if(dades[i].res == "verd")
        {
            actual.n_vegades++;
        }
    }
    nou_usuari_trobat(r, actual, "");*/
    return r;
}


bool esta_fet(vector<string>& problemes, string exercici){
    for(int i = 0; i < int(problemes.size()); ++i){
        //cerr << problemes[i] << " == " << exercici << endl;
        if(problemes[i] == exercici){
            return true;
        }
    }
    problemes.push_back(exercici);
    return false;
}

Resultat usuari_mes_exer_intents(Historia& dades)
{
    Resultat r;
    r.dni = dades[0].dni;
    r.n_vegades = 1;
    return r;
}

void usuari_mes_exer(Historia& dades, Resultat& verd, Resultat& vermell)
{
    verd.dni = dades[0].dni;
    verd.n_vegades = 1;
    vermell.dni = dades[0].dni;
    vermell.n_vegades = 1;
}

int main(){
    int n;
    cin >> n;
    Historia historial(n);
    for(int i = 0; i < n; ++i){
        llegeix(historial[i]);
    }    
    //sort(historial.begin(), historial.end(), ordre_res);
    //sort(historial.begin(), historial.end(), ordre_dni);
    //escriu(historial);
    //cout << endl << endl;
    //Buscarem la persona amb més enviament verd
    Resultat mes_enviaments_verds;// = usuari_mes_verd(historial);
    Resultat mes_exer_verds;
    Resultat mes_exer_vermells;
    //usuari_mes_exer(historial, mes_exer_verds, mes_exer_vermells);
    Resultat mes_intents;// = usuari_mes_exer_intents(historial);

    //sort(historial.begin(), historial.end(), ordre_cronologic);
    if(mes_enviaments_verds.n_vegades != 0){
        cout << "alumne amb mes enviaments verds:     " << mes_enviaments_verds.dni << " (" << mes_enviaments_verds.n_vegades << ")" << endl;
    }
    else{
        cout << "alumne amb mes enviaments verds:     -" << endl;
    }
    if(mes_exer_verds.n_vegades != 0){
        cout << "alumne amb mes exercicis verds:      " << mes_exer_verds.dni << " (" << mes_exer_verds.n_vegades << ")" << endl;
    }
    else{
        cout << "alumne amb mes exercicis verds:      -" << endl;
    }
    if(mes_exer_vermells.n_vegades != 0){
        cout << "alumne amb mes exercicis vermells:   " << mes_exer_vermells.dni << " (" << mes_exer_vermells.n_vegades << ")" << endl;
    }
    else{
        cout << "alumne amb mes exercicis vermells:   -" << endl;
    }
    cout << "alumne amb mes exercicis intentats:  " << mes_intents.dni << " (" << mes_intents.n_vegades << ")" << endl;
    cout << "alumne que ha fet l'ultim enviament: " << historial[n - 1].dni << endl;
}


// alumne amb mes enviaments verds:     40123456 (4)
// alumne amb mes exercicis verds:      77777777 (3)
// alumne amb mes exercicis vermells:   11223344 (1)
// alumne amb mes exercicis intentats:  11223344 (4)
// alumne que ha fet l'ultim enviament: 11223344
