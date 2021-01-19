#include <iostream>
using namespace std;

int main(){
    int inicial, a_comparar, count = 0;
    cin >> inicial;
    cout << "nombres que acaben igual que " << inicial << ":" << endl;
    inicial %= 1000;
    while(cin >> a_comparar){
        if(a_comparar%1000 == inicial){
            cout << a_comparar << endl;
            ++count;
        }
    }
    cout << "total: " << count << endl;
}
