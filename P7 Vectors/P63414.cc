#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n > 0) {
        vector<int> P(n);
        for(int i = 0; i < n; ++i) cin >> P[i];
        sort(P.begin(), P.end());
        int count = 1;
        int last = P[0];
        for(int i = 1;i < n; ++i){
            if(P[i] == last) ++count;
            else{
                cout << last << " : " << count << endl;
                count = 1;
                last = P[i];
            }
        }
        cout << last << " : " << count << endl;
        
    }
    else {
        cerr << "0" << endl;
    }
}
