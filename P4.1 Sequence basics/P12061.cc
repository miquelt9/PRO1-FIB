#include <iostream>
using namespace std;

int main(){
    string word;
    int count = 0;
    bool inici = false, fi = false;
    while(cin >> word and fi == false){
        if(word == "principi") inici = true;
        else if(word == "final") fi = true;
        else if(inici) ++count;
    }
    if(inici and fi) cout << count << endl;
    else cout << "sequencia incorrecta" << endl;
}
