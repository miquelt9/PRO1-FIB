#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> Rows;
typedef vector<Rows> Matriu;

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transposa(Matriu& M) {
    int size = M.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            swap(M[i][j], M[j][i]);
        }
    }
}


int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, Rows(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transposa(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
