#include <iostream>
using namespace std;

int main(){
    int n, b;
    while(cin >> b >> n){
        int digits = 1;
        int aux = b;
        while(b <= n){
            b *= aux;
            ++digits;
        }
        cout << digits << endl;
    }
}
