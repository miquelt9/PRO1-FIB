#include <iostream>
using namespace std;

int reverse(int reversed){
    int n = reversed;
    reversed = 0;
    while(n > 9){
        reversed += n%10;
        reversed *= 10;
        n /= 10;
    }
    reversed += n%10;
    return reversed;
}

bool es_capicua(int n){
    if(n == reverse(n)) return true;
    else return false;
}


int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
}
