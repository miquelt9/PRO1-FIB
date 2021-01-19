#include <iostream>
using namespace std;

struct Temps{
	int h, m, s;
};

void incrementa (Temps& r){
	r.s += 1;
	if(r.s == 60){
		r.s = 0;
		++r.m;
		if(r.m == 60){
			r.m = 0;
			++r.h;
			if(r.h == 24){
				r.h = 0;
			}
		}
	}
}

void decrementa (Temps& r){
	r.s -= 1;
	if(r.s == -1){
		r.s = 59;
		--r.m;
		if(r.m == -1){
			r.m = 59;
			--r.h;
			if(r.h == -1){
				r.h = 23;
			}
		}
	}
}

void escriu (const Temps& r){
	cout << r.h << " ";
	cout << r.m << " ";
	cout << r.s << endl;
}

void un_segon(const Temps& t, Temps& t1, Temps& t2){
	t1 = t2 = t;
	incrementa(t1);
	decrementa(t2);
}

int main(){
	Temps rellotge;
	Temps t1;
	Temps t2;
	while(cin >> rellotge.h >> rellotge.m >> rellotge.s){
		un_segon(rellotge, t1, t2);
		escriu(t1);
		escriu(t2);
	}
}