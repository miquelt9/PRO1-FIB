#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim){
	int digit = n%10;
	if(n < 10){
		maxim = n;
		minim = n;
	}
	else digit_maxim_i_minim(n/10, maxim, minim);
	maxim = max(digit, maxim);
	minim = min(digit, minim);
}


int main() {
    int x;
    while (cin >> x) {
      int a, b;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

