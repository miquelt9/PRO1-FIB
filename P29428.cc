#include <iostream>
#include <vector>
using namespace std;

bool conte(string paraula1,string paraula2){ //Funció per mirar si p2 dins p1
	int llargada1 = paraula1.size();
	int llargada2 = paraula2.size();
	bool found = false;
	int count = 0;
	int check = 0;
	if(llargada1 >= llargada2){
		while(not found and check <= llargada1){
			if(paraula1[check] == paraula2[count]){
				check++;
				count++;
				if(count == llargada2) found = true;
			}
			else{
				check = check - count + 1;
				count = 0;
			}
		}
	}
	return found;
}
int main() {
	int n;
	cin >> n;
	vector<string> paraules(n);
	for(int i = 0; i < n; ++i) cin >> paraules[i];
	for(int i = 0; i < n; ++i){
		cout << paraules[i] << ":";
		for(int j = 0; j < n; ++j){
			if(conte(paraules[i], paraules[j])) cout << " " << paraules[j];
		}
		cout << endl;
	}
}