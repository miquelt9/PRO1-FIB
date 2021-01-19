#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


typedef vector<char> Fila;
typedef vector<Fila> Rectangle;


void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    int columnes = r[0].size();
    int files = r.size();
    bool found = false;
    fils = cols = 1;
    int imin = files - 1, imax = 0, jmin = columnes - 1, jmax = 0;
    //cerr << files << columnes << endl;
    
    int i = 0;
    int j = 0;
    while (not found and i < files){
        j = 0;
        while (not found and j < columnes){
            if (r[i][j] == c){
                imin = i;
                found = true;
            }
            ++j;
        }
        ++i;
    }

    found = false;
    i = 0;
    while (not found and i < columnes){
        j = 0;
        while (not found and j < files){
            if (r[j][i] == c){
                jmin = i;
                found = true;
            }
            ++j;
        }
        ++i;
    }

    found = false;
    i = files-1;
    while (not found and i >= 0){
        j = columnes-1;
        while (not found and j >= 0){
            if (r[i][j] == c){
                imax = i;
                found = true;
            }
            --j;
        }
        --i;
    }    

    found = false;
    i = columnes-1;
    while (not found and i >= 0){
        j = files-1;
        while (not found and j >= 0 ){
            if (r[j][i] == c){
                jmax = i;
                found = true;
            }
            --j;
        }
        --i;
    }
    cols += jmax - jmin;
    fils += imax - imin;
}


int main() {
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int fils, cols;
      dimensions_minimes(c, r, fils, cols);
      cout << fils << " " << cols << endl;
    }
  }
}
