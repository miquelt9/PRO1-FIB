#include <iostream> 
using namespace std;

int main(){
	char c;
	int count = 0;
	int holacount = 1;
	while(cin >> c){
		if(holacount == 1 and c == 'h') ++holacount;
		else if(holacount == 2 and c == 'o') ++ holacount;
		else if(holacount == 3 and c == 'l') ++holacount;
		else if(holacount == 4 and c == 'a'){
			++count;
			holacount = 1;
		}
		else holacount = 1;
	}
	cout << count << endl;
}