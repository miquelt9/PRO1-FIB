#include <iostream>
#include <vector>
using namespace std;

bool inside(const vector<double>& v, double n){
  for(int i = 0; i < (int)v.size(); ++i){
    if(v[i] == n) return true;
  }
  return false;
}

vector<double> diferencia(const vector<double> & V1, const vector<double> & V2){
  int llargada1 = V1.size();
  vector<double> r_prov(llargada1);
  int llargada2 = V2.size();
  int i, j ,k;
  i = j = k = 0;
  //cerr << "we started?" << endl;
  while(i < llargada1 and j < llargada2){
    if(V1[i] < V2[j]){
      if(k == 0 or V1[i] != r_prov[k-1]) {
        r_prov[k] = V1[i];
        ++k;
      }
      ++i;
    }
    else if(V1[i] > V2[j]) ++j;
    else ++i;
  }
  //cerr << "heeere" << endl;
  while (i < llargada1) {
    if (k == 0 or r_prov[k-1] != V1[i]) {
      r_prov[k] = V1[i];
      ++k;
    }
    ++i;
  }
  //cerr << "aqui" << endl;
  vector<double> r(k);
  for(int l = 0; l < k; ++l) r[l] = r_prov[l];
  return r;
}

int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = diferencia(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = diferencia(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
}
