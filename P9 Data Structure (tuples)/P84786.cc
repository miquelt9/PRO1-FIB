#include <typeinfo>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Punt {
   double x, y;
};

struct Cercle {
  Punt centre;
  double radi;
};

double distancia(const Punt& a, const Punt& b){
  double x = abs(a.x - b.x);
  double y = abs(a.y - b.y);
  double dist = sqrt(pow(x, 2) + pow(y, 2));
  return dist;
}

void desplaca(Punt& p1, const Punt& p2){
  p1.x += p2.x;
  p1.y += p2.y;
}
void escala(Cercle& c, double esc){
  c.radi *= esc;
}
void desplaca(Cercle& c, const Punt& p){
  c.centre.x += p.x;
  c.centre.y += p.y;
}
bool es_interior(const Punt& p, const Cercle& c){
  if(distancia(p, c.centre) < c.radi) return true;
  return false;
}

