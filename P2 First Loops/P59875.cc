#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int gran, petit;
    if(x > y){
        gran = x;
        petit = y;
    }
    else{
        gran = y;
        petit = x;
    }
    for(int i = gran; i >= petit; --i){
        cout << i << endl;
    }
}
