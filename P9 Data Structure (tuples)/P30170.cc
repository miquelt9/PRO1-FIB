#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Dada{
	string paraula;
	int repeticions;
};

bool ordre_alfabetic(const Dada& a, const Dada& b){
	return a.paraula < b.paraula;
}

int main(){
	int n;
	while(cin >> n){
		vector<Dada> llista(n);
		for(int i = 0; i < n; ++i){
			cin >> llista[i].paraula;
			llista[i].repeticions = 1;
		}

		sort(llista.begin(), llista.end(), ordre_alfabetic);

		for(int i = 1; i < n; ++i){
			if(llista[i].paraula == llista[i - 1].paraula){
				llista[i].repeticions += llista[i - 1].repeticions;
				llista[i - 1].repeticions = 0;
			}
		}

		vector<int> total(n + 1, 0);
		for(int i = 0; i < n; ++i){
			total[llista[i].repeticions] += llista[i].paraula.size();
		}

		for(int i = 1; i < n + 1; ++i){
			if(total[i] != 0) cout << i << " : " << total[i] << endl;
		}
		cout << endl;
	}
}