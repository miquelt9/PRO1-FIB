#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main(){
	char c;
	cin >> c;
	if(('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z')){
		escriu_linia(c, "lletra", true);
		if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'){
			escriu_linia(c, "vocal", true);
			escriu_linia(c, "consonant", false);
		}
		else{
			escriu_linia(c, "vocal", false);
			escriu_linia(c, "consonant", true);
		}
		if('a' <= c and c <= 'z'){
			escriu_linia(c, "majuscula", false);
			escriu_linia(c, "minuscula", true);
		}
		else{
			escriu_linia(c, "majuscula", true);
			escriu_linia(c, "minuscula", false);
		}
		escriu_linia(c, "digit", false);
	}
	else{
		escriu_linia(c, "lletra", false);
		escriu_linia(c, "vocal", false);
		escriu_linia(c, "consonant", false);
		escriu_linia(c, "majuscula", false);
		escriu_linia(c, "minuscula", false);
		if('0' <= c and c <= '9') escriu_linia(c, "digit", true);
		else escriu_linia(c, "digit", false);

	}
}