#include <typeinfo>
#include <iostream>
using namespace std;

struct Rellotge{
	int h;
	int m;
	int s;
};

Rellotge mitja_nit (){
	Rellotge mitjanit;
	mitjanit.s = 0;
	mitjanit.m = 0;
	mitjanit.h = 0;
	return mitjanit;
}

void incrementa (Rellotge& r){
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

void escriu (const Rellotge& r){
	if(r.h > 9) cout << r.h << ":";
	else cout << "0" << r.h << ":";
	if(r.m > 9) cout << r.m << ":";
	else cout << "0" << r.m << ":";
	if(r.s > 9) cout << r.s << endl;
	else cout << "0" << r.s << endl;
}


int main () {
    Rellotge r = mitja_nit();
    for (int i=0; i<=25*60*60; ++i) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
