#include <iostream>
using namespace std;

int main(){
	int h, m, s;
	cin >> h >> m >> s;
	s += 1;
	if (s == 60){
		s = 0;
		m += 1;
	}
	if (m == 60){
		m = 0;
		h += 1;
	}
	if (h == 24) h = 0;

	if (h < 10) cout << "0" << h << ":";
	else cout << h << ":";
	if (m < 10) cout << "0" << m << ":";
	else cout << m << ":";
	if (s < 10) cout << "0" << s << endl;
	else cout << s << endl;
}

