#include <iostream>
#include <cmath>
using namespace std; 
double r = 20; 
double R  ;
double  s ;
double  pi = acos(-1) ;
int main () 
{  
  cin >> R;
  s = pi*R*R - pi*r*r;   
  if ( s <= 0) 
   {cout << " it is impossible "; }
  cout << s;
 







return 0;
}
