#include <iostream>
#include <cmath>
using namespace std;
double a,b,c,p,s;
int main () 
{
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
     
    cout << s;




return 0;
}
