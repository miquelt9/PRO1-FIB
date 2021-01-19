#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	string forma;
	cout.setf(ios::fixed);
	cout.precision(6);
	double a, b;
	while(n > 0){
		cin >> forma;
		if(forma == "rectangle"){
			cin >> a >> b;
			cout << a*b << endl;
		} else if(forma == "cercle"){
			cin >> a;
			cout << a*a*M_PI << endl;
		}
		--n;
	}
}