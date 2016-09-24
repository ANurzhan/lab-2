#include <iostream>
using namespace std;
double R1, R2, R3, R0;
int main () {
cin >> R1 >> R2 >> R3;

R0 = R1*R2*R3/(R2*R3 + R1*R3 + R1*R2);
               
                          
 cout << R0;




return 0;
}