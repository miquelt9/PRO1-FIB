#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char lletra_mes_frequent(const string& s){
	string v = s;

	sort(v.begin(), v.end());
	int count = 1;
	int max = 1;

	char maxlletra, lastlletra;
	maxlletra = lastlletra = v[0];

    for(int i = 1; i < v.size(); ++i){
        if(v[i] == lastlletra){
        	++count;
        	if(count > max){
           		max = count;
           		maxlletra = v[i];
           	}
        }
        else count = 1;
        lastlletra = v[i];
    }
	return maxlletra;
}

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    vector<string> P(n);
    for(int i = 0; i < n; ++i) cin >> P[i];
    double mitjana = 0;
    for(int i = 0; i < n; ++i) mitjana += P[i].size();
    mitjana /= n;
    cout << mitjana << endl;
    for(int i = 0; i < n; ++i){
        if(P[i].size() >= mitjana) cout << P[i] << ": " << lletra_mes_frequent(P[i]) << endl;
    }
}
