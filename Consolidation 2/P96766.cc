#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s) {
    int i, j;
    i = 0;
    j = s.length() - 1;
    bool palindrom = true;
    while (i < j and palindrom) {
        palindrom = (s[i] == s[j]);
        ++i;
        --j;
    }
    return palindrom;
}

int main(){
	int n;
	cin >> n;
	string paraula;
	cout << "-----" << endl;
	while(n != 0){
		vector<string> paraules(n, "");
		int max = 0;

		for(int i = 0; i < n; ++i){
			cin >> paraula;
			if(es_palindrom(paraula)){
				paraules[i] = paraula;
				if((int)paraula.size() > max) max = paraula.size();
			}
		}
		if(max == 0) cout << "cap palindrom" << endl;
		else{
			for(int i = 0; i < n; ++i){
				if ((int)paraules[i].size() == max) cout << paraules[i] << endl;
			}
		}
		cout << "-----" << endl;
		cin >> n;
	}
}