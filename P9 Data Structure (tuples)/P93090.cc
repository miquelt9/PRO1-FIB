#include <iostream>
using namespace std;

struct Fraccio{
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

int mcmul(int n1, int n2){
  int mcm = (n1*n2)/gcd(n1,n2);
  return mcm;
}

Fraccio racional(int n, int d){
  Fraccio r;
  if(n == 0){
    r.num = 0, r.den = 1;
  }
  else{
    int aux = abs(gcd(n,d));
    if(d < 0){
      r.num = -n/aux;
      r.den = -d/aux;
    }
    else{
      r.num = n/aux;
      r.den = d/aux;
    }
  }
  return r;
}

Fraccio suma(const Fraccio& f1, const Fraccio& f2){
  Fraccio resultat;

  int mcm = mcmul(f1.den, f2.den);
  resultat.num = f1.num*(mcm/f1.den);
  resultat.den = f2.num*(mcm/f2.den);
  
  resultat = racional(resultat.num + resultat.den, mcm); //Com que no podem modificar valors, hem guardat el segon num a resultat.den

  return resultat;
}

int main(){
  char c;

  Fraccio total;
  cin >> total.num >> c >> total.den;

  while(cin >> c and c != '='){
    Fraccio next;
    cin >> next.num >> c >> next.den;
    total = suma(total, next);
  }

  cout << total.num << "/" << total.den << endl;
}
