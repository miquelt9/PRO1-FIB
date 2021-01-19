#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if('a' <= c and c <= 'z') cout << "lletra" << endl;
    else if('A' <= c and c <= 'Z') cout << "lletra" << endl;
    else if('0' <= c and c <= '9') cout << "digit" << endl;
    else cout << "res" << endl;
}
