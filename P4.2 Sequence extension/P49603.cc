#include <iostream>
using namespace std;

int main(){
	int n, count = 0, lastone = 0;
	while(cin >> n){
		string str1, str2;
		bool order = true;
		if(n != 0){
			cin >> str1;
			for(int i = 1; i < n; ++i){
				cin >> str2;
				if(str2 < str1) order = false;
				str1 = str2;
			}
		}
		++count;
		if(order) lastone = count;
	}
	if(lastone > 0) cout << "L'ultima linia ordenada creixentment es la " << lastone << "." << endl;
	else cout << "No hi ha cap linia ordenada creixentment." << endl;
}