#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
    double a; cin >> a;
    double b; cin >> b;
    double c; cin >> c;

    double K;
    K= (b*b)-(4*a*c);
   
    double x;
    x = ((-b)- sqrt(K))/(2*a);
    cout << round(x*1e3)/1e3;

    x= ((-b)+ sqrt(K))/(2*a);
    cout << " "<< round(x*1e3)/1e3;

}