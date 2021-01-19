#include <iostream>
using namespace std;

int engreixa(int n) {
	if(n < 10) return n;

	int num = engreixa(n/10);
	int num_a_engreixar = num%10;
	int max = n%10;

	if(num_a_engreixar > max) return num*10 + num_a_engreixar;
	else return num*10 + max;
}

int main(){
	int n;
	while (cin >> n) cout << engreixa(n) << endl;
}