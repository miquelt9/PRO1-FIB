#include <typeinfo>
#include <iostream>
#include <cmath>
using namespace std;

struct Punt{
  double x, y;
};

double distancia(const Punt& a, const Punt& b){
  double x = abs(a.x - b.x);
  double y = abs(a.y - b.y);
  double dist = sqrt(pow(x, 2) + pow(y, 2));
  return dist;
}
