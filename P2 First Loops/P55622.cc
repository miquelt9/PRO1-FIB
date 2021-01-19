#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "El nombre de digits de " << n << " es ";
    int digits = 1;
    while(n > 9){
        ++digits;
        n /= 10;
    }
    cout << digits << "." << endl;
}
