 
#include <iostream>
using namespace std;

int sum_min_max(int x,int y,int z){
    int total;
    if(x > y and x > z) total = x;
    else if(y > z) total = y;
    else total = z;
    if(x < y and x < z) total += x;
    else if(y < z) total += y;
    else total += z;
    return total;
}


int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}
