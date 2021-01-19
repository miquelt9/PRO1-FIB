#include <iostream>
#include <cmath>
using namespace std;

void read_rational(int& num, int& den){
	char c;
	cin >> num >> c >> den;
	cerr << num << " " << den << endl;
	int a = num;
	int b = den;
	while(b != 0){
		int aux = a%b;
		a = b;
		b = aux;
	}
	cerr << b << endl;
	num /= b;
	den /= b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
}
