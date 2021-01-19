#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool check(int n){
	if(n == 1 or n == 0) return false;
	for(int i = 2; i <= sqrt(n); ++i){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
    int n;
    while(cin >> n){
        vector<int> P(n);
        for(int i = 0; i < n; ++i) cin >> P[i];
        bool found = false;
        for(int i = 0; i < n and not found; ++i){
            for(int j = 0; j < n and not found; ++j){
                if( j != i and check(P[i] + P[j])) found = true;
            }
        }
        if(found) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
