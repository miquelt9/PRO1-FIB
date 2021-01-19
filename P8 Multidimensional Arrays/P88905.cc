#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> Rows;
typedef vector<Rows> Matriu;

Matriu producte(const Matriu& a, const Matriu& b){
  int n = a.size();
  int m = a[0].size();
  int p = b[0].size();
  Matriu c(n, Rows(p, 0));
  for(int j = 0; j < p; ++j) {
    for(int k = 0; k < m; ++k) {
      for(int i = 0; i < n; ++i) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  return c;
}

int main(){
  
}