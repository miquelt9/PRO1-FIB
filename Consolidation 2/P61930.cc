#include <iostream>
using namespace std;


bool es_multiple_3(int n){
	int digits = 0;
    while(n > 0){
        digits += n%10;
        n /= 10;
    }
    if(digits > 10) return es_multiple_3(digits);
    if(digits == 0 or digits == 3 or digits == 6 or	digits == 9) return true;
    return false;
}


int main() {
    int n;
    while (cin >> n) {
        cout << (es_multiple_3(n) ? "true" : "false") << endl;
    }
}
