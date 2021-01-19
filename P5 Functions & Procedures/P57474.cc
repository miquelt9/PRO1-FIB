#include <iostream>
using namespace std;


int factorial (int n){
    int total = 1;
    for(int i = n; i > 0; --i){
        total *= i;
    }
    return total;
}

int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }

