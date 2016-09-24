#include <iostream>
#include <cmath>
using namespace std;
   
double a, b;
int x, y, z;
int main () 
{
       cin >> x >> y >> z;
 a = (sqrt(abs(x - 1)) - pow(abs(y) * 1.0 ,1/3))/ (1 + pow(x * 1.0,2)/2 +pow(y * 1.0,2)/4);
 b = x*( atan(z) + exp(-x * 1.0 - 3)); 
                    cout << a << " " << b;


                                                



return 0;
}

