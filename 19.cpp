#include <iostream>
#include <cmath>
using namespace std;
#define PI (acos)(-1)
int x, y, z;
double a,b;
int main () {                
cin >> x >> y >> z;            
 a = 2*cos(x-PI / 6)/ (0.5 + sin(y)*sin(y)) ;
 b = 1+ (z*z * 1.0)/( 3 + (z*z/5 )) ;

 cout << a << endl << b;
 




return 0;
}