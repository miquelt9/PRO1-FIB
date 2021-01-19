#include <iostream>
using namespace std;

int main(){
	int files = 0, columnes = 0;
	bool primerafila = true;
	while(cin >> files >> columnes){
		int n = 9;
		if(!primerafila) cout << endl;
		for(int i = 1; i <= files; ++i){
			for(int j = 1; j <= columnes; ++j){
				if(n != 0){
					cout << n;
					--n;
				}
				else{
					cout << n;
					n = 9;
				}
			}
		cout << endl;
		}
		primerafila = false;
	}
}