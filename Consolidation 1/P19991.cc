#include <iostream>
using namespace std;

int main(){
    int n, total = 0;
    char c;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> c;
            if(i == j) total += c-'0';
            if(j == n-i+1 and i != j) total += c-'0';
        }
    }
    cout << total << endl;
}
