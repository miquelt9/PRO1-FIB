#include <iostream>
using namespace std;

int main(){
    int n, senar = 0, parell = 0;
    cin >> n;
    int aux = n;
    while(aux > 0){
        senar += aux%10;
        aux /= 100;
    }
    aux = n/10;
    while(aux > 0){
        parell += aux%10;
        aux /= 100;
    }
    cout << senar << " " << parell << endl;
    bool found = false;
    if(senar == 0 or parell == 0){
        found = true;
        cout << "0 = ";
        if(senar > parell) cout << "0 * " << senar << endl;
        else cout << "0 * " << parell << endl;
    }
    else if(senar > parell){
        aux = 0;
        while(not found and aux <= senar){
            if(parell * aux == senar){
                found = true;
                cout << senar << " = " << aux << " * " << parell << endl;
            }
            ++aux;
        }
    }
    else{
        aux = 0;
        while(not found and aux <= parell){
            if(senar * aux == parell){
                found = true;
                cout << parell << " = " << aux << " * " << senar << endl;
            }
            ++aux;
        }
    }
    if(not found) cout << "res" << endl;
}
