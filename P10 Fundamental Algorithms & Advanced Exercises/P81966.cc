#include <iostream>
#include <vector>
using namespace std;


int posicio(double x, const vector<double>& v, int esq, int dre){
	if(esq	> dre) return -1;
	int meitat = double((esq + dre)/2);
	if(x == v[meitat]) return meitat;
	if(x < v[meitat]) return posicio(x, v, esq, meitat - 1);
	if(x > v[meitat]) return posicio(x, v, meitat + 1, dre);
	return -1;

}

int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, V, esq, dre) << endl;
        }
    }
}
