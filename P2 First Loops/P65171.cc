#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(2);
	double n;
	cin >> n;
	double total1 = 0, total2 = 0, x;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		total1 += (x*x);
		total2 += x;
	}
	cout << ((1/(n-1))*total1)-((1/(n*(n-1)))*total2*total2) << endl;
}