#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//podem aprofitar i tenir els nombres escrits del reves com en un problema que ja vam fer i després escriure'ls del drets xd

int main(){
	int n2, n1;
	while(cin >> n2){
		cin >> n1;
		int bits = floor(log2(n1)+1);
		//cerr << "bits: " << bits << endl;
		vector<int> v(2*bits);
		for(int i = 0; i < (int)v.size(); ++i){ //aprofitarem les paritats
			if(i%2 == 0)
			{
				v[i] = n1%2;
				n1 /= 2;
			}
			if(i%2 == 1)
			{
				v[i] = n2%2;
				n2 /= 2;
			}
		}
		for(int i = v.size()-1; i >= 0; --i) cout << v[i];
		cout << endl;
	}
}
