#include <iostream>
#include <cmath>
using namespace std;
double  a, b, c, m1, m2, m3;
int main ()  {
cin >> a >> b >> c;
m1 = 0.5*sqrt(2*(b*b + c*c) - a*a);	
 m2 = 0.5*sqrt(2*(a*a + c*c) - b*b);
 m3 = 0.5*sqrt(2*(b*b +a*a) - c*c);		


 cout << m1 << endl;
 cout << m2 << endl;
  cout << m3 ;
  return 0;







}