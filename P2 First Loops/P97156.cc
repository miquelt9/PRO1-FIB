#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    cin >> number1 >> number2;
    for( int i = number1; i <= number2; ++i){
        cout << i;
        if(i != number2) cout << ",";
    }
    cout << endl;
}

        
