#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double f ; 
    f = M_PI;
    double g ; 
    g = 10*9*8*7*6*5*4*3*2;
    double h ; 
    h = pow(8,8);
    double i ; 
    i = log(9.7);
    double j ; 
    j = ((7/sqrt(71))-sin(40*M_PI/180));
    double k ;
    k = pow(2.3,1/3.);

    cout << ((f-(g/h)+pow(i,j)))/pow(1.2,k);



}