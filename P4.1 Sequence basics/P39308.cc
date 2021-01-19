#include <iostream>
using namespace std;

int main(){
    int n;
    int iteration;
    int backwards = 0;
    while(cin >> n){
        cout << "divisors de " << n << ":";
        for (int i = n; i < count; ++i){

        }
        for(int i = 1; i*2 <= n; ++i){
            if(n%i == 0) cout << " " << i;
            ++iteration;
        }
        cout << " " << n << endl;
        cout << "Total iterations = " << iteration << endl;
    }
}
