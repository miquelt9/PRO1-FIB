#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> sequencia(n);
    for(int i = 0; i < n; ++i) cin >> sequencia[i];
    int contador = 0;
    for(int i = 0; i < n-1; ++i) if(sequencia[i] == sequencia[n-1]) ++contador;
    cout << contador << endl;
}
