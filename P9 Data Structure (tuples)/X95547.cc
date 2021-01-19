#include <iostream>
#include <vector>
using namespace std;

struct Punt{
	double x,y;
};

bool propietat1(const vector<Punt>& v){
	//cerr << "cheking prop 1" << endl;
	int size = v.size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(i != j and (v[i].x != v[j].x or v[i].y != v[j].y)){
				
				return true;
			}
		}
	}
	return false;
}

bool propietat2(const vector<Punt>& v){
	//cerr << "cheking prop 2" << endl;
	Punt p;
	p.x = p.y = 0;
	for (int i = 0; i < (int)v.size(); ++i)
	{
		p.x += v[i].x;
		p.y += v[i].y;
	}
	return p.x == p.y;
}

bool baricentre(const vector<Punt>& v, Punt& b){ 
	//cerr << "cheking prop 3" << endl;
	b.x = 0;
	b.y = 0;
	double size = v.size();
	for (int i = 0; i < (int)size; ++i)
	{
		b.x += v[i].x;
		b.y += v[i].y;
	}
	b.x /= size;
	b.y /= size;
	for(int i = 0; i < (int)size; ++i){
		if(v[i].x == b.x and v[i].y == b.y) return false;
	}
	return true;
}

void llegir(vector<Punt>& v){
	for(int i = 0; i < (int)v.size(); ++i){
		cin >> v[i].x >> v[i].y;
	}
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	while(cin >> n){
		vector<Punt> v(n);
		Punt b;
		llegir(v);
		bool prop1 = propietat1(v);
		bool prop2 = propietat2(v);
		bool prop3 = baricentre(v, b);

		//cerr << prop1 << " " << prop2 << " " << prop3 << endl;

		cout << "baricentre: (" << b.x << "," << b.y << ")" << endl;
		if(not prop1) cout << "el vector no compleix la propietat 1" << endl;
		else if(not prop2) cout << "el vector no compleix la propietat 2" << endl;
		else if(not prop3) cout << "el vector no compleix la propietat 3" << endl;
		else cout << "vector normalitzat" << endl;
	}
}