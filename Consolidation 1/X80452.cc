#include <iostream>
using namespace std;

int main(){
	int p, q, n;
	while(cin >> n){
		p = 0;
		q = 0;
		while(n > 0){
			if(n%7 != 0){
				n -= 4;
				++q;
			}
			else{
				n -= 7;
				++p;
			}
		}
		cout << p << " " << q << endl;
	}
}