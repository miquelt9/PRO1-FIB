#include <iostream>
using namespace std;


int reduccio_digits(int n){
	if(n < 10){
		return n%10;
	}
	if((n%10 + reduccio_digits(n/10)) > 9){
		return reduccio_digits((n%10 + reduccio_digits(n/10)));
	}
	return (n%10 + reduccio_digits(n/10));
}


int main() {
  int n;
  while (cin >> n) {
    cout << reduccio_digits(n) << endl;
  }
}
