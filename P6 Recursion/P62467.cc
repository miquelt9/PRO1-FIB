#include <iostream> 
using namespace std;

void barres(int num){
	if(num == 1) cout << "*";
	else{
		for(int i = 1; i <= 2; ++i){
			barres(num-1);
			for(int j = 1; j <= num; ++j){
				cout << "*";
			}
			cout << endl;
		}
	}
}

int main(){
	int n;
	bool anada = true;
	while(cin >> n){
		barres(n);
	}
}