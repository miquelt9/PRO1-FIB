#include <iostream>
#include <vector>
using namespace std;

bool totes(const vector<bool>& v){
	for(int i = 0; i < (int)v.size(); ++i) if(not v[i]) return false;
	return true;
}

int main(){
	char c;
	while(cin >> c){
		vector<bool> v(26, false);
		while(c != '.'){
			if(c >= 'A' and c <= 'Z') v[c-'A'] = true;
			if(c >= 'a' and c <= 'z') v[c-'a'] = true;
			cin >> c;
		}
		//for(int i = 0; i < (int)v.size(); ++i) cerr << " " << v[i];
		cerr << endl;
		if(totes(v)) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}