#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> fila;
typedef vector<fila> Matriu;

void escriu(int xo, int yo,int x, int y){
    cout << "(" << xo + 1 << "," << yo + 1 << ")<->(" << x + 1 << "," << y + 1 << ")" << endl;
}

void diagonal_1(const Matriu& matriu, int x, int y){ 
    bool found = false;
    int files = matriu.size();
    int columnes = matriu[0].size();

    //cerr << "alfil a :" << x << " " << y << endl;
    int i = x + 1;
    int j = y + 1;

    while(not found and i < files and j < columnes){
        //cerr << "que hi ha a:" << i << " " << j << " == " << matriu[i][j] << endl;
        if(matriu[i][j] ==  'X'){
            found = true;
        }
        else ++i,++j;
    }
    if(found) escriu(x, y, i, j);
}

void diagonal_2(const Matriu& matriu, int x, int y){ 
    bool found = false;
    int files = matriu.size();

    //cerr << "alfil a :" << x << " " << y << endl;
    int i = x + 1;
    int j = y - 1;

    while(not found and i < files and j >= 0){
        //cerr << "que hi ha a:" << i << " " << j << " == " << matriu[i][j] << endl;
        if(matriu[i][j] ==  'X'){
            found = true;
        }
        else ++i,--j;
    }
    if(found) escriu(x, y, i, j);
}

void diagonal_3(const Matriu& matriu, int x, int y){ 
    bool found = false;
    int columnes = matriu[0].size();

    //cerr << "alfil a :" << x << " " << y << endl;
    int i = x - 1;
    int j = y + 1;

    while(not found and i >= 0 and j < columnes){
        //cerr << "que hi ha a:" << i << " " << j << " == " << matriu[i][j] << endl;
        if(matriu[i][j] ==  'X'){
            found = true;
        }
        else --i,++j;
    }
    if(found) escriu(x, y, i, j);
}

void diagonal_4(const Matriu& matriu, int x, int y){ 
    bool found = false;

    //cerr << "alfil a :" << x << " " << y << endl;
    int i = x - 1;
    int j = y - 1;

    while(not found and i >= 0 and j >= 0){
        //cerr << "que hi ha a:" << i << " " << j << " == " << matriu[i][j] << endl;
        if(matriu[i][j] ==  'X'){
            found = true;
        }
        else --i,--j;
    }
    if(found) escriu(x, y, i, j);
}


int main(){
    int files, columnes;
    cin >> files >> columnes;
    Matriu tauler(files, fila(columnes));
    for(int i = 0; i < files; ++i){
        for(int j = 0; j < columnes; ++j){
            cin >> tauler[i][j];
        }
    }
    for(int i = 0; i < files; ++i){
        for(int j = 0; j < columnes; ++j){
            if(tauler[i][j] == 'X'){
                diagonal_1(tauler, i, j);
                diagonal_2(tauler, i, j);
                diagonal_3(tauler, i, j);
                diagonal_4(tauler, i, j);
            }
        }
    }
    
}
