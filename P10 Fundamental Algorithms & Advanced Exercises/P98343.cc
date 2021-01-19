#include <iostream>
using namespace std;

void centenes(int n){
	if(n == 1) cout << " cent";
	else if(n != 0){
		unitats(n);
		cout << "-cents";
	}

void desenes(int n){
	if(n == 1) cout << " deu";
	if(n == 2) cout << " vint";
	if(n == 3) cout << " trenta";
	if(n == 4) cout << " quaranta";
	if(n == 5) cout << " cinquanta";
	if(n == 6) cout << " seixanta";
	if(n == 7) cout << " setanta";
	if(n == 8) cout << " vuitanta";
	if(n == 9) cout << " noranta";
}

void unitats(int n){
	if(n == 1) cout << " un";
	if(n == 2) cout << " dos";
	if(n == 3) cout << " tres";
	if(n == 4) cout << " quatre";
	if(n == 5) cout << " cinc";
	if(n == 6) cout << " sis";
	if(n == 7) cout << " set";
	if(n == 8) cout << " vuit";
	if(n == 9) cout << " nou";
}

void fins_29(int n){
	if(n == 11) cout << " onze";
	if(n == 12) cout << " dotze";
	if(n == 13) cout << " tretze";
	if(n == 14) cout << " catorze";
	if(n == 15) cout << " quinze";
	if(n == 16) cout << " setze";
	if(n == 17) cout << " disset";
	if(n == 18) cout << " divuit";
	if(n == 19) cout << " dinou";
	if(n == 20) cout << " vint";
	else if(n > 20 and n < 30){
		cout << "vint-i-";
		unitats(n%10);
	}
}

void escriure(int n){
	if()
}

int main(){
	int n;
	while(cin >> n){
		if(n == 0) cout << "0: zero." << endl;
		else{
			cout << n << ":";
			escriure(n);
			cout << ".";
		}
	}
}