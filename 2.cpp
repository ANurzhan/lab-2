#include <iostream>
#include <cmath>
using namespace std;
int R, r, h;
double v, s, l;
double pi = acos(-1); 
int main ()
{
cin >> R >> r >> h;
 
	v = (pi*h/3)*( R*R + r*r + R*r);
	 cout << v << endl;
	 l = sqrt( h*h + (R-r)*(R-r) );
	 s = pi*l*(R+r) + pi*(R*R + r*r);
	       cout << s;
        return 0;
        
        }

