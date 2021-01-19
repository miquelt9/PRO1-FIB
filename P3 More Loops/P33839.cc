#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << "La suma dels digits de " << n << " es ";
        int digits = 0;
        while(n > 0){
            digits += n%10;
            n /= 10;
        }
        cout << digits << "." << endl;
    }
}
