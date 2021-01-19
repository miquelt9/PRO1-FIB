#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n,m;
    int count = 1;
    int diferencia = 0;
    int primera_matriu = 1;
    while(cin >> n >> m){
        int n_inputs = n*m - 1;
        int input;

        cin >> input;
        int maxim = input;
        int minim = input; 

        if(n != 1 or m != 1){
            for(int i = 0; i < n_inputs; ++i){
                cin >> input;
                if(input > maxim) maxim = input;
                if(input < minim) minim = input;
            }
        }

        if(abs(maxim - minim) > diferencia){
            diferencia = abs(maxim - minim);
            primera_matriu = count;
        }
        ++count;
    }
    cout << "la diferencia maxima es " << diferencia << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << primera_matriu << endl;
}
