#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct dau{
	char valor;
	int freq;
};

typedef vector<dau> tirada;

int conversio_int(char c)
{
	if(c == 'A') return 0;
	if(c == 'R') return 1;
	if(c == 'Q') return 2;
	if(c == 'C') return 3;
	if(c == 'D') return 4;
	return 5; //N 
}

void assigna_valors(tirada& t)
{
	for(int i = 0; i < (int)t.size(); ++i)
	{
		t[i].valor = i;
		t[i].freq = 0;
	}
}

void tiradeta(tirada& t, string ma)
{
	for(int i = 0; i < (int)ma.size(); ++i) ++t[conversio_int(ma[i])].freq;
}

bool ord(const dau& a, const dau& b)
{
	if(a.freq == b.freq) return a.valor < b.valor;
	return a.freq > b.freq;
}

string guanyador(const tirada& anna, const tirada& bernat)
{
	//cerr << " .. i busquem al guanyador" << endl;
	if(bernat[0].freq != anna[0].freq)
	{
		if(bernat[0].freq > anna[0].freq)
		{
			return "Bernat";
		}
		return "Anna";
	}
	if(bernat[1].freq != anna[1].freq)
	{
		if(bernat[1].freq > anna[1].freq)
		{
			return "Bernat";
		}
		return "Anna";
	}
	for(int i = 0; i < (int)anna.size(); ++i)
	{
		if(bernat[i].valor < anna[i].valor)
		{
			return "Bernat";
		}
		if(bernat[i].valor > anna[i].valor)
		{
			return "Anna";
		}
	}
	return "Anna";
	/*
	else
	{
		//cerr << "guanya per carta: ";
		if(bernat[i+1].valor != 2 and anna[i+1].valor != 2)
		{
			if(bernat[i].valor < anna[i].valor) return "Bernat";
			if(bernat[i].valor > anna[i].valor) return "Anna";
		}
		else return guanyador(anna, bernat, i + 1, ma_anna, ma_bernat);
	}
	else
	{
		if(anna[i].valor == bernat[i].valor) return guanyador(anna, bernat, i + 1, ma_anna, ma_bernat);
		else return millor_carta(ma_anna, ma_bernat);
	}
	}
	//cerr << "aqui" << endl;
	return millor_carta(ma_anna, ma_bernat);
	*/
}

int main()
{
	tirada tirada_anna(6);
	tirada tirada_bernat(6);
	int anna, bernat;
	anna = bernat = 0;
	
	assigna_valors(tirada_anna);
	assigna_valors(tirada_bernat);
	string guanya;
	string ma_anna;
	string ma_bernat;

	while(cin >> ma_anna)
	{
		cin >> ma_bernat;

		tiradeta(tirada_anna, ma_anna);
		tiradeta(tirada_bernat, ma_bernat);

		sort(tirada_anna.begin(), tirada_anna.end(), ord);
		sort(tirada_bernat.begin(), tirada_bernat.end(), ord);
/*
		for(int i = 0; i < (int)tirada_anna.size(); ++i) cerr << tirada_anna[i].freq;
		cout << endl;
		for(int i = 0; i < (int)tirada_bernat.size(); ++i) cerr << tirada_bernat[i].freq;
*/		

		guanya = guanyador(tirada_anna, tirada_bernat);

		if(guanya == "Bernat") ++bernat;
		else ++anna;

		cout << guanya << endl;

		assigna_valors(tirada_anna);
		assigna_valors(tirada_bernat);
	}
	cout << "Guanyades per l'Anna: " << anna << endl;
	cout << "Guanyades per en Bernat: " << bernat << endl;
}