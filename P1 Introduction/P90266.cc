#include <iostream>
using namespace std;

int main(){
	string nom1, nom2;
	cin >> nom1 >> nom2;
	if (nom1 < nom2) cout << nom1 << " < " << nom2 << endl;
	else if (nom1 > nom2) cout << nom1 << " > " << nom2 << endl;
	else cout << nom1 << " = " << nom2 << endl;
}
