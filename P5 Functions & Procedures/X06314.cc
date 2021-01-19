#include <iostream>
using namespace std;


void info_sequencia(int& suma, int& ultim){
	suma = 0;
	int n;
	cin >> n;
	if(n == 0) ultim = 0;
	else{
		suma = ultim = n;
		while(cin >> n and n != 0){
			suma += n;
			if(n != 0) ultim = n;
		}
	}
}

int main(){
	int suma_comp, ultim_comp, suma, ultim;
	int count = 1;
	info_sequencia(suma_comp, ultim_comp);
	bool wip = true;
	while(wip){
		info_sequencia(suma, ultim);
		if(suma == suma_comp and ultim == ultim_comp) ++count;
		if(ultim == 0) wip = false;
	}
	cout << count << endl;
}