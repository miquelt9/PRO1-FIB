#include <iostream>
using namespace std;

int actualitza(int n){
	int r = 0;
	while(n > 0){
		r += n%10;
		n /= 10;
	}
	return r;
}

int trobada_de_rius (int n) {
	int riu1 = 1;
	int riu3 = 3;
	int riu9 = 9;
	while(riu1 != n and riu3 != n and riu9 != n){
		if(riu1 < n) riu1 += actualitza(riu1);
		else if(riu3 < n) riu3 += actualitza(riu3);
		else if(riu9 < n) riu9 += actualitza(riu9);
		else n += actualitza(n);
	}
	return n;
}

int main ()
{
    int n;
    while (cin >> n) {
        cout << n << " " << trobada_de_rius(n) << endl;
    }
}
