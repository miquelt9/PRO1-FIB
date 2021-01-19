#include <iostream>
using namespace std;

int main(){
	double n1;
	cin >> n1;
	cout << int(n1) << " ";
	if (n1 - int(n1) != 0) cout << int(n1) + 1 << " ";
	else cout << int(n1) << " ";
	if (n1 - int(n1) < 0.5) cout << int(n1) << endl;
	else cout << int(n1) + 1 << endl;

}