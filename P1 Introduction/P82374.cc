#include <iostream>
using namespace std;

int main(){
	int x, a, b, c, d;
	cin >> x >> a >> b >> c >> d;
	if ((a <= x && x <= b) || (c <= x && x <= d)) cout << "si" << endl;
	else cout << "no" << endl;

}
