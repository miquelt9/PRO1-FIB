#include <iostream>
using namespace std;

int main(){
    char cordenada;
    int e_o = 0, n_s = 0;
    while(cin >> cordenada){
        if(cordenada == 'n'){
            n_s += -1;
        } else if(cordenada == 's') {
            n_s += 1;
        } else if(cordenada == 'o') {
            e_o += -1;
        } else {
            e_o += 1;
        }
    }
    cout << "(" << e_o << ", " << n_s << ")" << endl;
}
