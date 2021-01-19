#include <iostream>
#include <vector>
using namespace std;

struct Racional{
	int num, den;
};

int gcd(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

Racional simplifica(Racional a){
	int aux = gcd(a.num, a.den);
	Racional r;
	r.num = a.num/aux;
	r.den = a.den/aux;
	if(r.den < 0){
		r.num *= -1;
		r.den *= -1;
	}	
	return r;
}

Racional suma(Racional& r1, Racional& r2){
	Racional r;
	r.den = r1.den * r2.den;
	r.num = r1.num*r2.den + r2.num*r1.den;
	return simplifica(r);
}

Racional mutltiplica(Racional& r1, Racional& r2){
	Racional r;
	r.num = r1.num*r2.num;
	r.den = r1.den*r2.den;
	return simplifica(r);
}

void escriu(Racional& r1){
	if(r1.num == 0) cout << "0" << endl;
	else if(r1.den == 1) cout << r1.num << endl;
	else cout << r1.num <<"/" << r1.den << endl;

}

int main(){
	Racional r1, r2;
	cin >> r1.num >> r1.den;
	r1 = simplifica(r1);
	escriu(r1);
	string op;
	while(cin >> op){
		if(op == "suma"){
			cin >> r2.num >> r2.den;
			r1 = suma(r1, r2);
		}
		else if(op == "resta"){
			cin >> r2.num >> r2.den;
			r2.num = -r2.num;
			r1 = suma(r1, r2);
		}
		else if(op == "multiplica"){
			cin >> r2.num >> r2.den;
			r1 = mutltiplica(r1, r2);
		}
		else if(op == "divideix"){
			cin >> r2.den >> r2.num;
			r1 = mutltiplica(r1, r2);
		}
		escriu(r1);
	}

}