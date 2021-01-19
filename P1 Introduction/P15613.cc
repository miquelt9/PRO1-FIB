#include <iostream>
using namespace std;

int main(){
	int temperatura;
	cin >> temperatura;
	if(temperatura < 10){
		cout << "fa fred" << endl;
		if (temperatura <= 0) cout << "l'aigua es gelaria" << endl;
	}
	else if(temperatura > 30){
		cout << "fa calor" << endl;
		if (temperatura >= 100) cout << "l'aigua bulliria" << endl;
	}
	else cout << "s'esta be" << endl;
}