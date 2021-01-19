#include <iostream>
using namespace std;

int main(){
	int n, digits = 1;
	cin >> n;
	cout << n;
	int total = n;
	while(total > 9){
		++digits;
		total /= 10;
	}
	total = 0;
	for(int i = 0; i < int(digits/2.0 + 1); ++i){
		total += n%10;
		n /= 100;
	}
	if(total%2 == 0) cout << " ES TXATXI" << endl;
	else cout << " NO ES TXATXI" << endl;

}