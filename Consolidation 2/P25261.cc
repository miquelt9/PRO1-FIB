#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ord(const int& a, const int& b){
	return a > b;
}

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0; i < n; ++i) cin >> v[i];
		sort(v.begin(), v.end(), ord);
		bool primer = true;
		for(int i = 0; i < n; ++i){
			if(not primer) cout << " ";
			cout << v[i];
			primer = false;
		}
		cout << endl;
	}
}