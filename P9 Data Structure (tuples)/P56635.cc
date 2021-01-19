#include <iostream>
using namespace std;

struct Rectangle{
	int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r){
	//cerr << "reading" << endl;
	cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int relacio(const Rectangle& r1, const Rectangle& r2){
	if(r1.x_esq == r2.x_esq and r1.x_dre == r2.x_dre and r1.y_baix == r2.y_baix and r1.y_dalt == r2.y_dalt) return 4;
	if(r1.x_esq >= r2.x_esq and r1.x_dre <= r2.x_dre and r1.y_baix >= r2.y_baix and r1.y_dalt <= r2.y_dalt) return 1;
	if(r1.x_esq <= r2.x_esq and r1.x_dre >= r2.x_dre and r1.y_baix <= r2.y_baix and r1.y_dalt >= r2.y_dalt) return 2;
	if(r1.x_esq > r2.x_dre or r2.x_esq > r1.x_dre or r2.y_baix > r1.y_dalt or r1.y_baix > r2.y_dalt) return 0;
	return 3;
}

int main(){
	int n;
	Rectangle r1, r2;
	while(cin >> n and n != 0){
		llegeix(r2);
		--n;
		bool intersecten = true;
		while(intersecten and n != 0){
			r1 = r2;
			llegeix(r2);
			//cerr << "relacio "<< relacio(r1,r2) << endl;
			if(relacio(r1, r2) == 0){ //no superficie comuna
				intersecten = false;
			}
			else if(relacio(r1, r2) == 1){ //Si r1 dins r2 llavors r1 tindra la superficie comuna
				r2 = r1;
			}
			else if(relacio(r2, r1) == 3){
				if(r1.x_esq > r2.x_esq) r2.x_esq = r1.x_esq;
				if(r1.x_dre < r2.x_dre) r2.x_dre = r1.x_dre;
				if(r1.y_baix > r2.y_baix) r2.y_baix = r1.y_baix;
				if(r1.y_dalt < r2.y_dalt) r2.y_dalt = r1.y_dalt;
			}
			--n;
		}
		if(not intersecten or r2.x_esq == r2.x_dre or r2.y_dalt == r2.y_baix){
			cout << "interseccio buida" << endl;
			while(n != 0){ //acaba de llegir els altres rectangles
				llegeix(r1), --n;
			}
		}
		else {
			cout << "punt inferior esquerre = (" << r2.x_esq << ", " << r2.y_baix << ");" ;
			cout << " punt superior dret = (" << r2.x_dre << ", " << r2.y_dalt << ")" << endl;
		}


	}/*
		if(rela == 0) cout << "els rectangles no intersecten" << endl;
		else if(rela == 1) cout << "el primer rectangle es interior al segon" << endl;
		else if(rela == 2) cout << "el segon rectangle es interior al primer" << endl;
		else if(rela == 3) cout << "els rectangles intersecten" << endl;
		else if(rela == 4) cout << "els rectangles son iguals" << endl;
	*/
}