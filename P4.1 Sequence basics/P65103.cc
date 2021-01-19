#include <iostream>
using namespace std;

int main(){
    int i, comparar, count = 1;
    cin >> i;
    bool found = i == 0;
    while(cin >> comparar and not found){
        if(count == i){
        	cout << "A la posicio " << i << " hi ha un " << comparar << "." << endl;
        	found = true;
        }
        ++count;
        }
    if(not found or i == 0) cout << "Posicio incorrecta." << endl;
}
