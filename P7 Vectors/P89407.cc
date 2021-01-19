#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Fusiona 2 vectors i els ordena
vector<char> fusio_vectors(const vector<char>& v1, const vector<char>& v2){ 
    vector<char> result = v1;
    int llargada2 = v2.size();
    for(int i = 0; i < llargada2; ++i) result.push_back(v2[i]);
    sort(result.begin(), result.end());
    return result;
}

//Donat un numero el retorna com un vector<char> en base 2 <= x <= 16
vector<char> canvi_de_base(int n, int b){
    vector<char> result;
    while(n > 0){
        char x = n%b;
        if(x > 9) x = 'A' + x - 10;
        else x += '0';
        result.insert(result.begin(), x);
        n /= b;
    }
    return result;
}

// funció que rep dos integers i una base
// 1.- S'obtenen dos vectors de char amb x i y canviats a base b
// 2.- Es fusionen aquests dos vectors
// 3.- S'ordena el vector resultant de la fusió
// 4.- S'obté un vector de char amb (x*y) canviat a base b
// 5.- S'ordena el vector resultant amb la multiplicació
// 6.- Es comparen els vectors per veure si són iguals. Es retorna el resultat de la comparació
bool mateixos_digits(int x, int y, int b){
    vector<char> X = canvi_de_base(x, b);
    vector<char> Y = canvi_de_base(y, b);
    vector<char> Z = canvi_de_base(x*y, b);

    X = fusio_vectors(X, Y);

    sort(X.begin(), X.end());
    sort(Z.begin(), Z.end());

    if(X == Z) return true;
    return false;
}

// Funció que imprimeix un integer per pantalla, canviat de base.
void escriu(int n, int base){
    if (n > 0) {
        escriu(n/base, base);
        int x = n%base;
        if (x > 9) {
            if (x == 10) cout << "A";
            else if (x == 11) cout << "B";
            else if (x == 12) cout << "C";
            else if (x == 13) cout << "D";
            else if (x == 14) cout << "E";
            else cout << "F";
        }
        else cout << x;
    }
}

int main()
{
    vector<char> entrada;
    int x, y;
    while (cin >> x >> y) {
        cout << "solucions per a " << x << " i " << y << endl;
        bool hi_ha_solucions = false;
        for (int i = 2; i <= 16; ++i) {
            if (mateixos_digits(x, y, i)) {
                escriu(x, i);
                cout << " * ";
                escriu(y, i);
                cout << " = ";
                escriu(x*y, i);
                cout << " (base " << i << ")" << endl;
                hi_ha_solucions = true;
            }
        }
        if (not hi_ha_solucions) cout << "cap" << endl;
        cout << endl;
    }
}

