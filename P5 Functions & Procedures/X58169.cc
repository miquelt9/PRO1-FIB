#include <iostream> 
using namespace std;

void infoSequencia(int& max, int& lpos){
	if(max <= lpos) max = lpos;
}

int main(){
	int n, max = 0, pos = 1, lpos = 1;
	while(cin >> n and n != 0){
		infoSequencia(max, n);
		if(max == n) lpos = pos;
		++pos;		
	}
	cin >> n;
	pos = 1;
	bool found = false;
	while(not found and n != 0){
		if(n == max) found = true;
		else ++pos;
		cin >> n;
	}
	if(found) cout << max << " " << lpos << " " << pos << endl;
	else cout << max << " " << lpos << " " << "-" << endl;
}