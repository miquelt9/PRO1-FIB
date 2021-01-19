#include <iostream>
#include <vector>
using namespace std;

struct Parell{
	int valor, pos;
};

typedef vector<Parell> Vec_Com;

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2){
	int llargada1 = v1.size();
	int llargada2 = v2.size();
	Vec_Com r(llargada2 + llargada1);
	int i, j, k;
	i = j = k = 0;

	while(i < llargada1 and j <	llargada2)
	{
		if(v1[i].pos < v2[j].pos)
		{
			r[k] = v1[i];
			++i;
			++k;
		}
		else if(v2[j].pos < v1[i].pos)
		{
			r[k] = v2[j];
			++j;
			++k;
		}
		else
		{
			if(v2[j].valor + v1[i].valor != 0){
				r[k].valor = v1[i].valor + v2[j].valor;
				r[k].pos = v1[i].pos;
				++k;
			}
			++i;
			++j;
		}
	}
	while(i < llargada1){
		r[k] = v1[i];
		++i, ++k;
	}
	while(j < llargada2){
		r[k] = v2[j];
		++j, ++k;
	}
	Vec_Com resultat(k);
	for(int l = 0; l < k; ++l) resultat[l] = r[l];
	//cerr << i << "    " << j << endl;
	return resultat;
}

void llegeix(Vec_Com& v){
	int n;
	cin >> n;
	Vec_Com r(n);
	char c;
	for(int i = 0; i < n; ++i){
		//cerr << "reading num : " << i << endl;
		cin >> r[i].valor >> c >> r[i].pos;
	}
	v = r;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		Vec_Com v1;
		llegeix(v1);
		Vec_Com v2;
		llegeix(v2);
		Vec_Com r = suma(v1, v2);
		int llargada_r = r.size();

		cout << llargada_r;
		for(int j = 0; j < llargada_r; ++j){
			cout << " " << r[j].valor << ";" << r[j].pos;
		}
		cout << endl;
	}
}