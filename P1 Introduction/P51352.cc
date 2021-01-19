#include <iostream>
using namespace std;

int main(){
	char element1, element2;
	cin >> element1 >> element2;
	if (element1 == element2) cout << "-" << endl;
	else if (element1 > element2) cout << "1" << endl;
	else cout << "2" << endl;
}
