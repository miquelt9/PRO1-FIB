#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, k, total;
    while(cin >> a >> b >> k){
        total = 0.0;
        for(int i = 0; a+(i*k) <= b; ++i){
            total += (1.0/(a+(i*k)));
        }
        cout << total << endl;
    }
}
