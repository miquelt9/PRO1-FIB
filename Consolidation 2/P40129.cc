#include <iostream>
#include <vector>
using namespace std;

int calcular(const vector<char>& v, int& pos){
	int total = 0;
	int n;
	for(int i = 0; i < (int)v.size(); ++i){
		//cerr << v[i] << "*" << i+1 << " + "; 
		if(v[i] >= '0' and v[i] <= '9'){
			n = v[i] - '0';
			total += n*(i+1);
		}
		else if(v[i] == 'X') total += 10*(i+1);
		else if(v[i] == '?'){
			pos = i + 1;
			//cerr << "no number detected" << endl;
		}
	}
	return total;
}

char remaining(int n, int pos){
	for(int i = 0; i < 11; ++i){
		//cerr << "if i = " << i << "then " << n%11 + pos*i << endl;
		if((n+ pos*i)%11 == 0){
			if(i != 10) return i + '0';
			return 'X';
		}
	}
	return '-';
}

int main(){
	vector<char> isbn(10);
	//cerr << "aquiiiII" << endl;
	char c;
	while(cin >> c){
		isbn[isbn.size()-1] = c;
		for(int i = isbn.size()-2; i >= 0; --i){  //oju que l'entrem del reves per facilitar-ne el calcul xd
			cin >> isbn[i];
		}
		int pos = -1;
		int suma = calcular(isbn, pos);
		//cerr << endl << suma << " <-- suma " << endl;
		//cerr << pos << " <-- pos" << endl; 
		cout << remaining(suma, pos) << endl;
	}
}