#include <iostream>
using namespace std;

int main(){
    int n0, n1;
    cin >> n0;
    for(int i = 1; i <= n0; ++i){
        cin >> n1;
        bool primer = n1 > 1 ;
        int j = 2;
        while(j*j <= n1 and primer){
            if(n1%j == 0) primer = false;
            ++j;
        }
        if(primer) cout << n1 << " es primer" << endl;
        else cout << n1 << " no es primer" << endl;
    }
}
