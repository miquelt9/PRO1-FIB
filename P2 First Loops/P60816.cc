#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n > 15){
		cout << hex << uppercase << n%16;
		n /= 16;
	}
	cout << hex << uppercase << n << endl;
}