#include <iostream> 
using namespace std;

int count(int n){
	int digits = 1;
	while(n > 9){
		n /= 10;
		++digits;
	}
	return digits;
}

int main(){
	int n;
	cin >> n;
	int leftpart = 0, rightpart = 0, aux = count(n);
	if(aux%2 == 0){
		for(int i = 1; i <= aux; ++i){
			if(i <= aux/2) rightpart += n%10;
			else leftpart += n%10;
			n /= 10;
		}
		if(leftpart < rightpart) cout << leftpart << " < " << rightpart << endl;
		else if(leftpart > rightpart) cout << leftpart << " > " << rightpart << endl;
		else cout << leftpart << " = " << rightpart << endl;
	}
	else cout << "res" << endl;
}