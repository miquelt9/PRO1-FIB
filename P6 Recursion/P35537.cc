#include <iostream>
using namespace std;


bool es_creixent(int n){
    if(n >= 100){
        if((n/10)%10 <= n%10) return es_creixent(n/10);
        else return false;
    } else {
        if((n/10)%10 <= n%10) return true;
        else return false;
    }
}


int main() {
    int n;
    while (cin >> n) cout << (es_creixent(n) ? "true" : "false") << endl;
}
