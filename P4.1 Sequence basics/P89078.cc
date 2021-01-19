#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    bool found = false;
    while(cin >> n and found == false){
        if(n%2 == 0) found = true;
        ++count;
    }
    cout << count << endl;
}
