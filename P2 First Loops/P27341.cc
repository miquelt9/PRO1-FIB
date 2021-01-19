#include <iostream>
using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		int total = 0;
		for(int i = a; i <= b; ++i){
			total += (i*i*i);
		}
		cout << "suma dels cubs entre " << a << " i " << b << ": " << total << endl;
	}
}