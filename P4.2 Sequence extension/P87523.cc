#include <iostream>
using namespace std;

int main(){
	bool found = false;
	char c;
	int counter = 0;
	while(cin >> c and not found and c != '.'){
		if(c == 'h') counter = 1;
		else if(c == 'o' and counter == 1) counter = 2;
		else if(c == 'l' and counter == 2) counter = 3;
		else if(c == 'a' and counter == 3) found = true;
		else counter = 0;
	}
	if(found) cout << "hola" << endl;
	else cout << "adeu" << endl;
}