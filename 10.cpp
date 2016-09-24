#include <iostream>
#include <cmath>
using namespace std; 
double a, c, b, p, r;
int main () 
{
  cin >> a >> c;
  b = sqrt(c*c - a*a);
  p = (a+b+c)/2;
  r = sqrt((p-a)*(p-b)*(p-c)/p);
  cout << b << " " << r;





return 0;
}
