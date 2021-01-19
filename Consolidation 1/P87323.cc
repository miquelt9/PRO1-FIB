#include <iostream>
using namespace std;

int main(){
	int f, c, n;
	cin >> f >> c;
	for (int i = 0; i < f; ++i)
	{
		n = i%10;
		bool descreasing = true;
		for(int j = 0; j < c; ++j){
			if(i != j) cout << n;
			if(descreasing){
				n = (n-1)%10;
				if(n == -1) n = 9;
				if(i == j){
					cout << "0";
					n = 1;
					descreasing = false;
				}
			}
			else{
				n = (n+1)%10;
			}
		}
		cout << endl;
	}
}