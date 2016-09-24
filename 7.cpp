#include <iostream>
#include <cmath>
using namespace std;
double w,b,a,g;
int main ()  
{
 cin >> w >> b; 
 a = (abs(w) + abs(b))/2;
 g = sqrt( abs(w)*abs(b));
 cout << " the arithmetic mean is  " << a << endl;
 cout << " the geometric  mean is  " << g ;




 


return 0;

}