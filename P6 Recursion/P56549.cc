#include <iostream>
using namespace;

void binary(int n){
	if(n == 1) cout << n;
	else{
		binary(n/2);
		cout << n%2;
	}
}

int main(){
	int n;
	while(cin >> n){
		cout << n << " = " << binary(n) << ", " << endl;
	}
}