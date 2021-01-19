#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
using namespace std;

/////////// GARBELL D'ERATOSTENES /////////////////////

vector<bool> garbell_eratostenes(int n){
	vector<bool> v(n, true);
	v[0] = v[1] = false;
	for(int i = 2; i <= sqrt(n); ++i){
		//cerr << "checking " << i << endl;
		for(int j = i+i; j <= n; j += i){
			v[j] = false;
			//cerr << j << " element i snow false" << endl;
		}
	}
	//cerr << "---------COMPLETED !-----------" << endl;
	return v;
}

vector<int> garbell_eratostenes_millorat(int n){ // en realitat no ho esta due to camparar costa més que assignar directament
	vector<int> v(n, true);
	v[0] = v[1] = false;
	for(int i = 2; i <= sqrt(n); ++i){
		int j = i+i;
		while(j <= n){
			if(v[j] != 0){
				v[j] = i;
				j += i;
			} else {
				j *= v[j];
			}
		}
	}
	return v;
}


int main(){
	clock_t t;
	t = clock();
	vector<int> garbell;
	garbell = garbell_eratostenes_millorat(100000000);
	cout << clock() - t << " miliseconds " << endl;
	int n;
	while(cin >> n){
		if(garbell[n] != 0) cout << n << " es primer" << endl;
		else cout << n << " no es primer" << endl;
	}
}