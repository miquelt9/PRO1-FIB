#include <iostream>
using namespace std;

int main(){
	bool primer = true;
	int n;
	while(cin >> n){
		if(not primer) cout << endl;
		else primer = false;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				cout << n;
			}
			cout << endl;
		}
	}
}