#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		for(int j = n; j > i; --j){
			cout << " ";		
		}
		for(int j = 1; j <= (i*2)-1; ++j){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = 1; i <= n; ++i){
		for(int j = i; j >= 1 and j != n; --j){
			cout << " ";		
		}
		for(int j = n*2-1; j > i*2; --j){
			cout << "*";
		}
		if(i != n) cout << endl;
	}
	
}