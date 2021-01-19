#include <iostream>
using namespace std;

int main(){
    int i, comparar, count = 1;
    cin >> i;
    while(cin >> comparar and comparar != -1){
        if(count == i) cout << "A la posicio " << i << " hi ha un " << comparar << "." << endl;
        ++count;
    }
}
