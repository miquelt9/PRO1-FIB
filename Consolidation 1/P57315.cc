#include <iostream>
using namespace std;

int min(int a, int b){
    if(a < b) return a;
    else return b;
}

int main(){
    int n,a , b, c;
    cin >> a >> b >> c;
    if(a != min(a,b) or a != min(a,c)){
        n = a;
        if(min(b,c) == b){
            a = b;
            b = n;
        } else {
            a = c;
            c = n;
        }
    }
    if(c < b){
        n = b;
        b = c;
        c = n;
    }
    for(int i = 1; i <= 3 ; ++i){
        char lletra;
        cin >> lletra;
        if(lletra == 'A') cout << a;
        if(lletra == 'B') cout << b;
        if(lletra == 'C') cout << c;
        if( i != 3) cout << " ";
    }
    cout << endl;
}
