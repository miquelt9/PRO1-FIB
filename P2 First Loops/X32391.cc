#include <iostream>
using namespace std;

int main(){
	int despeses, estalvis, setmanes, count = 0, setmanada;
	cin >> despeses >> estalvis >> setmanes;
	for(int i = 0; i < setmanes; ++i){
		cin >> setmanada;
		estalvis = estalvis+setmanada-despeses;
		if(estalvis > 0) ++count;
		else if(estalvis <= 0) i = setmanes;
	}
	cout << count << endl;
}