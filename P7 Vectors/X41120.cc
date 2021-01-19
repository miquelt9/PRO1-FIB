#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v){
	vector<int> result;
	int aux = v.size();
	for(int i = 1; i < aux - 1; ++i){
		if(v[i - 1] < v[i] and v[i] > v[i + 1]){
			result.push_back(v[i]);
		}
	}
	return result;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	v = calcula_cims(v);
	int size = v.size();
	cout << size << ":";
	for(int i = 0; i < size; ++i) cout << " " << v[i];
	cout << endl;
	bool segona_linia = false;
	if(size != 0){
		int ultim_cim = v[size - 1];
		if(v[0] > ultim_cim) cout << v[0];
		for(int i = 1; i <= size - 2; ++i){
			if(v[i] > ultim_cim){
				cout << " " << v[i];
				segona_linia = true;
			}
		}
	}
	if(not segona_linia) cout << "-";
	cout << endl;
}