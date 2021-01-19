#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) { //primera posicio exclosa
	int count = 0;  //farem un while per si les columnes son difererents i un altre per les files (no s'hi entrera si son iguals)
	//cerr << "posicio actual : " << of << " " << oc << endl;
	while(of != df){ 
		if(df > of) ++of;
		if(df < of) --of;
		count += mat[of][oc]; //tan oc com dc haurien de ser valids
		//cerr << "posicio actual : " << of << " " << oc << endl;
	}
	while(oc != dc){ 
		if(dc > oc) ++oc;
		if(dc < oc) --oc;
		count += mat[of][oc]; //tan of com df haurien de ser valids
		//cerr << "posicio actual : " << of << " " << oc << endl;
	}
	return count;
}

int main(){
	int n, m;
	cin >> n >> m;
	Matriu mat(n, vector<int>(m));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j) cin >> mat[i][j];
	}
	/*cerr << "mat readed:" << endl;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j) cout << mat[i][j];
		cerr << endl;
	}*/


	int total, fila_origen, columna_origen;
	cin >> fila_origen >> columna_origen;
	total = mat[fila_origen][columna_origen];

	int fila_desti, columna_desti;
	while(cin >> fila_desti >> columna_desti) {
		total += suma_linia(mat, fila_origen, columna_origen, fila_desti, columna_desti);
		columna_origen = columna_desti;
		fila_origen = fila_desti;
	}
	cout << "suma = " << total << endl;
}