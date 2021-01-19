#include <iostream> 
using namespace std;

int main(){
	char c;
	bool found = false;
	while(cin >> c and c != '.' and not found){
		if(c == 'a') found = true;
	}
	if(found) cout << "si" << endl;
	else cout << "no" << endl;
} 