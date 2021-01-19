#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int avalua(const vector<int>& P, int x){
    int total = 0;
    int aux = P.size();
    for(int i = 0; i < aux; ++i){
        total += (P[i]*pow(x, i));
    }
    return total;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << avalua(P,x) << endl;
    }
}
