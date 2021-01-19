#include <iostream>
#include <vector>
using namespace std;

string sortida(int p, vector<int>& v){
	int mida = v.size();
	vector<bool> passat(mida, false);
	while(not passat[p]){
		passat[p] = true;
		int desti = p + v[p];
		if(v[p] < 0){
			if(desti < 0) return "esquerra";
			p = desti;
		}
		if(v[p] > 0){
			if(desti >= mida) return "dreta";
			p = desti;
		}
	}
	return "mai";
}


int main() {
  int p, n;
  while (cin >> p >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << sortida(p, v) << endl;
  }
}
