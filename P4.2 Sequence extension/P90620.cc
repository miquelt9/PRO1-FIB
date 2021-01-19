#include <iostream>
using namespace std;

int main(){
	int pre, actual, post;
	bool found = false;
	cin >> pre >> actual;
	while(not found and cin >> post and post != 0){
		if(pre <= actual and actual >= post and actual > 3143) found = true;
		pre = actual;
		actual = post;
	}
	if(found) cout << "SI" << endl;
	else cout << "NO" << endl;

}