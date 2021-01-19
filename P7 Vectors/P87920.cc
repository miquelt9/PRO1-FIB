#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> P(n);
        for(int i = 0; i < n; ++i) cin >>P[i];
        int suma = 0;
        for(int i = 0; i < n; ++i) suma += P[i];
        bool found = false;
        for(int i = 0; i < n and not found; ++i){
            if((suma - P[i]) == P[i]) found = true;
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
