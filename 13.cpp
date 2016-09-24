#include <iostream>
#include <cmath> 
using namespace std; 
double a, b, c;
double h1, h2, h3, p,s;
int main () {
cin >> a >> b >> c;

p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));


 h1 =  2*s/a;
 h2 =  2*s/b;
 h3 =  2*s/c;
    
    cout << "h(a) "  <<  h1 << "  "<< "h(b) " << h2<<"  "<< "h(c) " << h3;




return 0; 
}    