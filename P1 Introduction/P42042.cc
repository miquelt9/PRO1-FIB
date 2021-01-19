#include <iostream>
using namespace std;

int main(){
	char lletra;
	cin >> lletra;
	if('a' <= lletra && lletra <= 'z') cout << "minuscula" << endl;
	else if('A' <= lletra && lletra <= 'Z') cout << "majuscula" << endl;

	if(lletra == 'a' || lletra == 'e' || lletra == 'i' || lletra == 'o' || lletra == 'u' || lletra == 'A' || lletra == 'E' || lletra == 'I' || lletra == 'O' || lletra == 'U'){
		cout << "vocal" << endl;
	}
	else cout << "consonant" << endl;
}
