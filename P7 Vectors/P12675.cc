#include <iostream>
#include <vector>
using namespace std;

//Precondicio: els dos vectors venen ordenats

int elements_comuns (const vector<int>& X, const vector<int>& Y){
	int check_x, check_y, count;
	check_x = check_y = count = 0;
	while(check_x < X.size() and check_y < Y.size()){
		if(X[check_x] > Y[check_y]) ++check_y;
		else if(X[check_x] < Y[check_y]) ++check_x;
		else{
			++check_x;
			++count;
		}
	}
	return count;
}

int main ()
{
    int n, m;
    while (cin >> m >> n) {

        vector<int> X(m);
        for (int i=0; i<m; ++i) cin >> X[i];

        vector<int> Y(n);
        for (int i=0; i<n; ++i) cin >> Y[i];
        
        cout << elements_comuns(X,Y) << endl;

    }
    return 0;
}

