#include <iostream>
using namespace std;

int main(){
    string primera, word, lastword;
    cin >> primera;
    lastword = primera;
    int count = 1, total = 1;
    while(cin >> word){
        if(word == primera and word == lastword) ++count;
        else count = 1;
        lastword = word;
        if(count > total) total = count;
    }
    cout << total << endl;
}
