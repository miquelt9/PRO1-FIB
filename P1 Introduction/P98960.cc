#include <iostream>
using namespace std;

int main(){
	char lletra;
	cin >> lletra;
	if('a' <= lletra && lletra <= 'z') lletra = lletra - ('a'-'A');
	else if('A' <= lletra && lletra <= 'Z') lletra = lletra + ('a'-'A');
	cout << lletra << endl;
}
