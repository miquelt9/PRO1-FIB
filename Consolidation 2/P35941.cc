#include <iostream>
#include <vector>
using namespace std;

void escriu_lletra(string abcedari, char c){
	int i = 0;
	if(c == '_') cout << " ";
	else{
		while(abcedari[i] != c) ++i;
		cout << char(i+'a');
	}
}

int main(){
	string abcedari;
	while(cin >> abcedari){
		int n;
		cin >> n;
		string frase;
		for (int i = 0; i < n; ++i)
		{
			cin >> frase;
			for(int j = 0; j < (int)frase.size(); ++j) escriu_lletra(abcedari, frase[j]);
			cout << endl;
		}
		cout << endl;
	}
}