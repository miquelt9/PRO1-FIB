#include <iostream>
#include <string>
using namespace std;

int main(){
    string word, biggest, biggest2;
    cin >> biggest;
    while(cin >> word){
        if(word != biggest and word > biggest2){
            biggest2 = word;
            if(biggest2 > biggest){
                word = biggest;
                biggest = biggest2;
                biggest2 = word;
            }
        }
    }
    cout << biggest2 << endl;
}
