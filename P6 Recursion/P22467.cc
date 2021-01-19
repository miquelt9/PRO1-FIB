#include <iostream>
#include <cmath>
using namespace std;

bool es_primer_perfecte(int n) {
    //cerr << "Checking" << n << "..... :" << endl;
    for(int i = 2; i <= sqrt(n); ++i){
        if(n%i == 0) return false;
            //cerr << "not prime" << endl;
    }
    //cerr << "prime" << endl;
    if(n < 10){
        if(n != 1 and n != 0) return true;
        else return false;
    }
    int suma = 0;
    while(n > 9){
        suma += n%10;
        n /= 10;
    }
    suma += n%10;
    //cerr << suma << endl;
    return es_primer_perfecte(suma);
}


int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
}
