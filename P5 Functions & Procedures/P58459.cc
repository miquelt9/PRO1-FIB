#include <iostream>
using namespace std;

bool es_any_de_traspas(int any){
    if(any%400 == 0) return true;
    else if(any%100 == 0) return false;
    else if (any%4 == 0) return true;
    else return false;
}

bool es_data_valida(int d, int m, int a){
    bool valid = true;
    if(d < 1 or m < 1 or m > 12 or d > 31) valid = false;
    else if(es_any_de_traspas(a)){
        if(m == 2 and d > 29) valid = false;
        else if((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) valid = false;
    }
    else if(not es_any_de_traspas(a)){
        if(m == 2 and d > 28) valid = false;
        else if((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) valid = false;
    }
    return valid;
            
}

int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (es_data_valida(d, m, a) ? "true" : "false") << endl;
}
