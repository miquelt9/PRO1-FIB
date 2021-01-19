#include <iostream>
using namespace std;

int digits(int n){
	int digits = 1;
	while(n > 9){
		++digits;
		n /= 10;
	}
	return digits;
}

int pow(int n, int exp){
	int total = 1;
	for (int i = 0; i < exp; ++i){
		total *= n;
	}
	return total;
}

int main(){
	int n, m;
	bool playing = true;
	bool anna = false;
	cin >> n;
	cin >> m;
	int middle = (m/(pow(10, (digits(m)/2))))%10;
	if(digits(m)%2 == 0) playing = false;
	for (int i = 1; i <= (2*n)-1 and playing; ++i){
		cin >> m;
		if(not anna){
			anna = true;
			if(middle != (m/(pow(10, (digits(m)/2))))%10) playing = false;
		}
		else{
			anna = false;
			if(middle != (m/(pow(10, (digits(m)/2))))%10) playing = false;
		}
		if(digits(m)%2 == 0) playing = false;
	}
	if(not playing){
		if(anna) cout << "A" << endl;
		else cout << "B" << endl;
	}
	else cout << "=" << endl;
}