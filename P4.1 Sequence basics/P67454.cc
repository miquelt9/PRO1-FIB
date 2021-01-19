#include <iostream>
using namespace std;

int main(){
	char c;
	int count = 0;
	while(cin >> c and c != '.'){
		if(c == 'a') ++count;
	}
	cout << count << endl;
}