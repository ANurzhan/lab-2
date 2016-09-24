#include <iostream>
#include <cmath>
using namespace std;
int x, y, z;
double a,b;
int main () 
{
  cin >> x >> y >> z;
  a = (  1+y )*(( (x+y )/(x*x + 4) ) / (exp(-x*1.0-2) + 1/(x*x+4)) );
  b =  (1+ cos(y-2))/ (x*x*x*x/2 + (sin(x)*sin(x)));
  	 	

  cout << a << " " << b;
                      



                                                       
return 0;
} 