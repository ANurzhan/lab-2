#include <iostream>
#include <cmath>
using namespace std;
double a, b, c, l1, l2, l3;
int main () {
cin >> a >> b >> c;
l1 = sqrt(b*c*((b+c)*(b+c) - (a*a)))/(b+c); 

cout << l1;




return 0;
}