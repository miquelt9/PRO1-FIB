#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Paraula{
	string p;
	int n; //vegades que apareix
};

bool comp(const Paraula& a, const Paraula& b){
	if(a.n == b.n) return a.p < b.p;
	return a.n > b.n;
}

int main(){
	int n, k;
	while(cin >> n >> k){
		string paraula;
		vector<string> llista(n);
		vector<Paraula> ordenades;

		for(int i = 0; i < n; ++i){
			cin >> llista[i];
		}
		sort(llista.begin(), llista.end());

		Paraula ultima;
		ultima.p = llista[0];
		ultima.n = 1;

		for(int i = 1; i < n; ++i){
			if(ultima.p != llista[i]){
				ordenades.push_back(ultima);
				ultima.p = llista[i];
				ultima.n = 1;
			}
			else{
				++ultima.n;
			}
		}
		ordenades.push_back(ultima);

		sort(ordenades.begin(), ordenades.end(), comp);

		for(int i = 0; i < k; ++i){
			cout << ordenades[i].p << endl;
		}
		cout << "----------" << endl;
	}
}