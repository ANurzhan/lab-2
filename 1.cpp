#include <iostream>
#include <cmath>
using namespace std;
int a, b, c, h ;
double s, v;
int main  ()
{  
 cout << " enter the sides of base of pyramid "<< endl;
 cin >> a >> b >> c;
 cout << "enter the height of pyramid" << endl;
 cin >> h;
 s = sqrt(3)*a*a/4;
 v = s*h/3;
 cout << v;
   
return 0;                 
 }
    
