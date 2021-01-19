#include <iostream>
#include <vector>
using namespace std;


double producte_escalar(const vector<double>& u, const vector<double>& v){
    double total = 0;
    for(int i = v.size() - 1; i >= 0; --i){
        total += (u[i]*v[i]);
    }
    return total;
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> u[i];
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << producte_escalar(u, v) << endl;
    }
}
