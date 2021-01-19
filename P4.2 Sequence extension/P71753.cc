#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int m;
		cin >> m;
		int max = m;
		for (int i = 1; i < n; ++i){
			cin >> m;
			if(m > max) max = m;
		}
		cout << max << endl;
	}
}