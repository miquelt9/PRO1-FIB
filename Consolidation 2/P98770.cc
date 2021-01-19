#include <iostream>
#include <vector>
using namespace std;

//vectors simaptics

int posicio_max(const vector<double>& v,int ini, int fi){
	int max_pos = ini;
	int max_num = v[ini];
	++ini;
	for(int i = ini; i < fi; ++i){
		if(v[i] > max_num){
			max_pos = i;
			max_num = v[i];
		}

	}
	return max_pos;
}

//p --> màxim , q --> màxim esquerrà
void calculaposicions(const vector<double>& v,int& p,int& q){
	p = posicio_max(v, 0, v.size());
	q = posicio_max(v, 0, p);
}

int main(){
	int n, p, q;
	cout.setf(ios::fixed);
	cout.precision(6);
	while(cin >> n){
		vector<double> v(n);
		for(int i = 0; i < n; ++i) cin >> v[i];
		calculaposicions(v, p, q);
		double total = 0;
		//cerr << "p: " << p << "   q: " << q << endl;
		//cerr << v[p] << "------" << v[q] << endl;
		for(int i = q; i <= p; ++i) total += v[i];
		double diferencia = p-q+1;
		cout << total/diferencia << endl;
	}
}