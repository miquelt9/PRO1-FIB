#include <iostream>
using namespace std;

int main(){
    int f, c, total = 0;
    char n;
    cin >> f >> c;
    for(int i = 0; i < f; ++i){
        for(int j = 0; j < c; ++j){
            cin >> n;
            if(i%2 == 0 and j%2 == 0) total += n-'0';
            else if(i%2 != 0 and j%2 != 0) total += n-'0';
        }
    }
    cout << total << endl;
}
