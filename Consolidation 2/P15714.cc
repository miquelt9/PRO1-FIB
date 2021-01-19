#include <iostream>
using namespace std;

int main(){
	int count, curtes, mitjanes, llargues;
	count = curtes = mitjanes = llargues = 0;
	char c;
	cin >> c;
	while(c != '.'){
		if(c != '-'){
			++count;
		}
		else{
			if(count > 0){
				if(count < 5) ++curtes;
				else if(count > 9) ++llargues;
				else ++mitjanes;
			}
			count = 0;
		}
		cin >> c;
	}
	if(count > 0){
		if(count < 5) ++curtes;
		else if(count > 9) ++llargues;
		else ++mitjanes;
	}
	cout << curtes << "," << mitjanes << "," << llargues << endl;
}