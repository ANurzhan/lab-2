#include <iostream>
#include <cmath>
using namespace std;
double q , w, e , r ;
double l;
int main () 
{
cin >> q >> w >> e >> r ;                 
	l = sqrt((q - e) * (q - e) + (w - r)*(w - r));

  cout << l;



return 0;
}