#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double distancia(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main(){
	//cerr << "començem " << endl;
	cout.setf(ios::fixed);
	cout.precision(4);
	double xo, x, yo, y;
	string paruala;
	//cerr << "aquiiiii" << endl;
	while(cin >> paruala){
		//cerr << "hem rebut una parauña" << endl;
		cin >> xo >> yo;
		double inici_x = xo;
		double inici_y = yo;
		cin >> x >> y;
		double dist = 0;
		//cerr << "aqui" << endl;
		while(x != inici_x or y != inici_y){
			dist += distancia(xo, yo, x, y);
			xo = x, yo = y;
			cin >> x >> y;
		}
		dist += distancia(xo, yo, x, y);
		cout << "Trajecte " << paruala << ": " << dist << endl;
	}
}