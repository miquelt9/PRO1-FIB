#include <iostream>
using namespace std;

int calcular(){
    char c;
    cin >> c;
    if(c == '+') return calcular() + calcular(); 
    else if(c == '-') return calcular() - calcular();
    else if(c == '*') return calcular() * calcular();
    else return c - '0';
}

int main(){
    cout << calcular() << endl;
}
