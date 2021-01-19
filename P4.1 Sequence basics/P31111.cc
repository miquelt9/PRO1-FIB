#include <iostream>
using namespace std;

int main(){
    char c;
    int opens = 0, closes = 0;
    bool error = false;
    while(cin >> c){
        if(c == '(') opens += 1;
        else if(c == ')') closes += 1;
        if (closes > opens) error = true;
    }
    if(error or closes != opens) cout << "no" << endl;
    else cout << "si" << endl;
}
