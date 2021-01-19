#include <iostream>
using namespace std;

int main(){
    int f, c, total = 0;
    char n;
    cin >> f >> c;
    for(int i = 0; i < f*c; ++i){
        cin >> n;
        total += n-'0';
    }
    cout << total << endl;
}
