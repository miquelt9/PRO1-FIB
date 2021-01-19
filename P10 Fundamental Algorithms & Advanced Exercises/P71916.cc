#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<char> Frase;

int main(){
	int n;
	cin >> n;
	Frase frase1;
	Frase frase2;
	for(int i = 0; i < n; ++i){
		frase1.clear();
		frase2.clear();
		char c;
		cin >> c;
		while(c != '.'){
			if(c >= 'A' and c <= 'Z') frase1.push_back(c);
			cin >> c;
		}
		cin >> c;
		while(c != '.'){
			if(c >= 'A' and c <= 'Z') frase2.push_back(c);
			cin >> c;
		}
		sort(frase1.begin(), frase1.end());
		sort(frase2.begin(), frase2.end());
		if(frase1 == frase2) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}