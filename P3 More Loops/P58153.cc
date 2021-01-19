#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
  double n, m;
  while(cin >> n >> m){
    double total = 0;
    int aux = n-m;
    for(int i = 1; i <= aux; ++i){
      total += 1/(m+1);
      ++m;
    }
  cout << total << endl;
  }
}
