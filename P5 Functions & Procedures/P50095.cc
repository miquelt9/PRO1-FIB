#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
	if(n == 1) return false;
	for(int i = 2; i <= sqrt(n); ++i){
		if(n%i == 0) return false;
	}
	return true;
}

int next_prime(int n){
	bool found = false;
	while(not found){
		if(n != 2) n += 2;
		else n++;
		if(check(n)) found = true;
	}
	return n;
}

int main(){
	int n;
	while(cin >> n and check(n)){
		cout << next_prime(n) << endl;
	}
	
}