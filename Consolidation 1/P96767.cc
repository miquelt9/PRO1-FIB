#include <iostream>
using namespace std;

int main(){
	double n, polinomi, total = 0;
	int i = 0;
	cin >> n;
	double aux = 1;
	if(n != 0){
		while(cin >> polinomi){
			if(i == 0) total += polinomi;
			else{ 
				aux *= n;
				total += polinomi * aux;
			}
			++i;
		}
	}
	else total = 1;
    cout.setf(ios::fixed);
    cout.precision(4);
	cout << total << endl;
}