#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double capital, interes;
	int temps;
	string tipus;
	cin >> capital >> interes >> temps >> tipus;
	if(tipus == "simple"){
		capital += capital*(interes/100.0)*temps;
	} 
	else if(tipus == "compost"){
			for (int i = 0; i < temps; ++i){
		capital += capital*(interes/100.0);
		}
	}
	cout << capital << endl;
}