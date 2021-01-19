#include <vector>
#include <iostream>
using namespace std;


bool quadrat_magic (const vector< vector<int> >& M){
	int n = M.size();
	//primer comprovarem les dues diagonals si son diferents return false otherwise anirem comprovant que sempre doni igual
	int count1 = 0;
	int count2 = 0;
	//cerr << "displaying diagonal " << endl;
	for(int i = 0; i < n; ++i){
		//cerr << M[i][n-1-i] << " ";
		count1 += M[i][i];
		count2 += M[i][n - 1 - i];
	}
	//cerr << endl;
	//cerr << "aqui" << endl;
	//cerr << count1 << "   " << count2 << endl;
	if(count1 != count2) return false;
	int comprovar = count1;
	//cerr << comprovar << endl;
	for(int i = 0; i < n; ++i){
		count1 = count2 = 0;
		for(int j = 0; j < n; ++j){
			count1 += M[i][j];
			count2 += M[j][i];
			if(M[i][j] < 0 or M[i][j] > n*n) return false;
		}
		//cerr << count1 << "   " << count2 << endl;
		if(comprovar != count1 or comprovar != count2) return false;
	}
	return true;

}

int main () 
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        cout << quadrat_magic(M) << endl;
        /*if(quadrat_magic(M)) cout << "YASSSS" << endl;
        else cout << "NOPE" << endl;*/
}   }

