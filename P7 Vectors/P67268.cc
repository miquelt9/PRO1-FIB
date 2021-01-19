#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> s(n);
        for(int i = 0; i < n; ++i) cin >> s[i];
        for(int i = n-1;i >= 0; --i){
            cout << s[i];
            if(i != 0) cout << " ";
        }
        cout << endl;
    }
}
