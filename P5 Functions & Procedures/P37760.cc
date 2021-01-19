#include <iostream> 
#include <cmath>
using namespace std;

int main(){
	double n;
	cout.setf(ios::fixed);
	cout.precision(6);
	double PI = 3.141592653589;
	while(cin >> n){
		cout << sin(n*PI/180) << " " << cos(n*PI/180) << endl;
	}
}