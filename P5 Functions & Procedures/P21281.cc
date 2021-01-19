#include <iostream>
#include <cmath>
using namespace std;


void factor(int n, int& f, int& q){
	int biggestf;
	int biggestq;
	int aux = n;
	biggestf = f = 2;
	biggestq = q = 0;
	while(aux%2 == 0){
		q++;
		aux /= 2;
	}
	biggestq = q;
	q = 0;
	f = 3;
	while(f <= sqrt(n)){
		if(aux%f == 0){
			++q;
			aux /= f;
			if(q > biggestq){
				biggestq = q;
				biggestf = f;
			}
		}
		else{
			f += 2;
			q = 0;
		}
	}
	f = biggestf;
	q = biggestq;
	if(aux == n){
		f = n;
		cerr << f << endl;
		q = 1;
	}
}


int main() {
  int n, q , f;
  while (cin >> n) {
    f = -1;
    q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;  }
}
