#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void insereix(vector<double>& v){
    if(v.size() != 1 and v[v.size()-1] < v[v.size()-2]){
        sort(v.begin(), v.end());
    }
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insereix(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
