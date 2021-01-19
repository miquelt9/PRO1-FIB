#include <iostream>
#include <vector>
using namespace std;

vector <bool> pos_rampas(const vector <int>& V){
	int size = V.size();
	vector<bool> result(size, false);
	for (int i = 0; i < size - 2; i++) {
		if(V[i] < V[i + 1] and V[i + 1] < V[i + 2]) result[i] = true;
		else if(V[i] > V[i + 1] and V[i + 1] > V[i + 2]) result[i] = true;
	}
	return result;
}

int pot_conflictives (const vector <bool>& B){
	int size = B.size();
	int count = 0;
	for (int i = 0; i < size - 2; i++) {
		if(B[i] and B[i + 1]) ++count;
		if(B[i] and B[i + 2]) ++count;
	}
	if(B[size - 3] and B[size - 2]) ++count;
	if(B[size - 3] and B[size - 1]) ++count;
	if(B[size - 2] and B[size - 1]) ++count;
	return count;
}

int main(){
	int n;
	while(cin >> n){
		vector<int> P(n);
		vector<bool> N(n);
		int size = P.size();
		for (int i = 0; i < size; ++i) cin >> P[i];
		N = pos_rampas(P);
		cout << "posicions amb rampa:";
		for(int i = 0; i < size; ++i){
			if(N[i]) cout << " " << i;
		}
		cout << endl;
		cout << "potencialment conflictives: " << pot_conflictives(N) << endl;
		cout << "---" << endl;
	}
}