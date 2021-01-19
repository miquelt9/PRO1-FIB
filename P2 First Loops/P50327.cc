#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int aux = n;
    int digits = 0;
    do{
        ++digits;
        aux /= 10;
    }while(aux > 0);
    for(int i = 0; i < digits; ++i){
        cout << n%10;
        n /= 10;
    }
    cout << endl;
}
