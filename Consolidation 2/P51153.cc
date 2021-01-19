#include <iostream>
#include <vector>
using namespace std;

//Bueno, com que en Salvador ja me'l conec segur que si anem comprovant les sumes en donara un EE
//de manera que donat que una suma senar nomes pot venir donada per un n parell i un n senar:

bool senar(const vector<int>& v){
	for(int i = 0; i < (int)v.size(); ++i){
		if(v[i]%2 == 1) return true;
	}
	return false;
}

bool parell(const vector<int>& v){
	for(int i = 0; i < (int)v.size(); ++i){
		if(v[i]%2 == 0) return true;
	}
	return false;
}

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0; i < n; ++i) cin >> v[i];
		if(parell(v) and senar(v)) cout << "si" << endl;
		else cout << "no" << endl;
	}
}