#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(b == 0){
            a = 1;
        } else {
            int aux = a;
            for( int i = 1; i < b; i++){
                a *= aux;
            }
        }
        cout << a << endl;
    }
}
