#include <iostream>
using namespace std;


bool es_any_de_traspas(int any){
    if(any%400 == 0) return true;
    else if(any%100 == 0) return false;
    else if (any%4 == 0) return true;
    else return false;
}

int main() {
    int a;
    while (cin >> a) cout << (es_any_de_traspas(a) ? "true" : "false") << endl;
}
