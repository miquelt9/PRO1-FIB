#include <iostream>
using namespace std;

int main(){
	char c = '0';
	int count = 0;
	while(c != '.'){
		cin >> c;
		if(c == 'a') ++count;
	}
	cout << count << endl;
}