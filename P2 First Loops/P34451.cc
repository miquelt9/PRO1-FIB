#include <iostream>
using namespace std;

int main(){
	int n, x, total = 0;
	cin >> n;
	while(cin >> x){
		if((x % n) == 0){
			++total;
		}
	}
	cout << total << endl;
}