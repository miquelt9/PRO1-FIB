#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> llista(n);
    for(int i = 0; i < n; ++i) cin >> llista[i];
    for(int i = n-1; i >= 0; --i){
        string paraula = llista[i];
        for(int j = llista[i].size() - 1; j >= 0; --j){
            cout << paraula[j];
        }
        cout << endl;
    }
}
