#include <iostream>
using namespace std;

int main(){
	double n, total = 0, count = 0;
	while(cin >> n){
		total += n;
		++count;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << total/count << endl;
}