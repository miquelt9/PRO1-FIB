#include <iostream>
using namespace std;

int main(){
	int anys, dies, hores, minuts, segons;
	cin >> anys >> dies >> hores >> minuts >> segons;
	dies += anys*365;
	hores += dies*24;
	minuts += hores*60;
	segons += minuts*60;
	cout << segons << endl;
}

