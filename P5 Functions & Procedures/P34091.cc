#include <iostream>
#include <cmath>
using namespace std;

bool es_perfecte(int x){
	int total = 1;
	for(int i = 2; i*i <= x; ++i){
		if(x%i == 0) total += i + x/i;
	}
	if(total == x and x != 0 and x != 1) return true;
	else return false;
}

int main () {
  int x;
  while (cin >> x) cout << (es_perfecte(x) ? "true" : "false") << endl;
}
