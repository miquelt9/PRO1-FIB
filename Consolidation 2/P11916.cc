#include <iostream>

using namespace std;

double factorial(int n) {
	if (n == 0) return 1;
	return factorial(n - 1) * n;
}

double term(int n) {
	return double(1) / factorial(n);
}

double taylor_e(int n) {
	if (n == 0) return 0;
	return taylor_e(n - 1) + term(n - 1);
}

int main(){
	int n;
	cout.setf(ios::fixed);
	cout.precision(10);
	while(cin >> n){
		cout << "Amb " << n << " terme(s) s'obte " << taylor_e(n) << "." << endl;
	}
}