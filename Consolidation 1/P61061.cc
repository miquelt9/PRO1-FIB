#include <iostream> 
using namespace std;

int product(int n){
	if(n > 9){
		int total = n%10;
		n /= 10;
		while(n != 0){
			total *= n%10;
			n /= 10;
		}
		return total;
	}
	else return n;
}

int main(){
	int n;
	while(cin >> n){
		do{
			cout << "El producte dels digits de " << n << " es " << product(n) << "." << endl;
			n = product(n);
		}while(n > 9);
		cout << "----------" << endl;
	}
}