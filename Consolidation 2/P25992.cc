#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool inv(const int& a, const int& b){
	return a > b;
}

void read(vector<int>& v){
	int n;
	cin >> n;
	while(n != 0){
		v.push_back(n);
		cin >> n;
	}
}

int main(){
	int m;
	while(cin >> m){
		if(m != 0){
			vector<int> v(1, m);
			read(v);

			/*cerr << "reading v   ";
			for(int i = 0; i < (int)v.size(); ++i) cerr << v[i] << " " ;
			cerr << endl;*/

			vector<int> senar;
			vector<int> parell;
			for(int i = 0; i < (int)v.size(); ++i){
				if(v[i]%2 == 0) parell.push_back(v[i]);
				else senar.push_back(v[i]);
			}
			sort(parell.begin(), parell.end());
			sort(senar.begin(), senar.end(), inv);

			bool primer = true;
			for(int i = 0; i < (int)parell.size(); ++i){
				if(not primer) cout << " ";
				cout << parell[i];
				primer = false;
			}
			cout << endl;
			primer = true;
			for(int i = 0; i < (int)senar.size(); ++i){
				if(not primer) cout << " ";
				cout << senar[i];
				primer = false;
			}
			cout << endl;
		}
		else cout << endl << endl;
	}
}