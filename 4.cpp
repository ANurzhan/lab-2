#include   <iostream>
#include <cmath> 
using namespace std;
double w,b,a,g;
int main () 
{  
    cin >>w>>b;
    a = (w+b)/2;
    g = sqrt(w*b);
    cout << " the arithmetic mean is " << a <<endl;
    cout << " the geomtric  mean is  " << g;




return 0;
}