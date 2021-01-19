#include <iostream>
using namespace std;

//No el pengis que no funcionarà xd

int main(){
	int n;
	while(cin >> n){
		for(int i = n; i >= 1; --i){ //Primer generarem la primera part de l'octagon:
			for(int j = 1; j < i; ++j){ //Gnerem els espais en ordre: n-1, n-2, n-3....                  
				cout << " ";
			}
			for(int j = n; j < 2*n-i; ++j){ //Invertim el procés i escrivim les "X", aconseguim el següent:  // __X
				cout << "X";																				 // _XX
			}																								 // XXX
			for(int j = 1; j <= n; ++j){ //Escrivim les "X" del mig, és a dir, les que ens permetran acabar la primera part com el problema P29973 (Triangle)
				cout << "X";
			}
			for(int j = i; j < n; ++j){ //Acabem la primera part amb el mateix algoritme que P29973
				cout << "X";
			}
			cout << endl;
		}
		
		for(int i = 1; i <= n-2; ++i){ //Procedim a fer la part del mig del l'octagon: //el -2 és per evitar que se'n generin 2 extres ja que d'axò ja se n'encarrega la 1a i 3a part
			for (int i = 1; i <= (3*(n-1))+1; ++i){ //Basant-nos en que les linies del mig de l'octagon tindran (3*n-1)+1 farem les linies corresponents
				cout << "X";
			}
			cout << endl;
		}
		for(int i = 1; i <= n; ++i){ //Comencem la tercera part en la que basicament invertirem la primera part
			for(int j = 1; j < i; ++j){ //Per simplificar l'explicació, hem girat el programa (només els 3 últims), el que genera els espais
				cout << " ";            //ha quedat en el mateix lloc, però li hem invertit les condicions perquè doni els espais en ordre ascendent
			}
			for(int j = i; j < n; ++j){
				cout << "X";
			}
			for(int j = 1; j <= n; ++j){
				cout << "X";
			}			
			for(int j = n; j < 2*n-i; ++j){
				cout << "X";
			}
			cout << endl;
		}
	}
}