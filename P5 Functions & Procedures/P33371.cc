#include <iostream>
using namespace std;

char codificat(char c, int k){
	if(c == '_'){
		return ' ';
	}
	if(c >= 'a' and c <= 'z'){
		return (c - 'a' + k)%26 + 'A';
	}
	return c;
}

int main(){
	int n;
	char c;
	while(cin >> n){
		while(cin >> c and c != '.'){
			cout << codificat(c, n);
		}
		cout << endl;
	}
}