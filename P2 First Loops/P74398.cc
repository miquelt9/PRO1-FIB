#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= 16; ++i){
        int aux = i;
        int count = 1;
        while(aux <= n){
            aux = i * aux;
            count += 1;
        }
        cout << "Base " << i << ": " << count << " cifras." << endl;
    }
}
