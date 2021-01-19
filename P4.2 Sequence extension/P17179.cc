#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		double m, max, min, mitjana;
		int n2;
		cin >> n2;
		cin >> m;
		min = m;
		max = m;
		mitjana = m;
		for (int j = 1; j < n2; ++j){
			cin >> m;
			if(m > max) max = m;
			if(m < min) min = m;
			mitjana += m;
		}
		cout.setf(ios::fixed);
		cout.precision(4);
		cout << min << " " << max << " " << mitjana/n2 << endl;	
	}
}