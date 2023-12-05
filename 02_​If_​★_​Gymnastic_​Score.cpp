#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a,b; 
cin >> a >> b ;
double c,d ; 
cin >> c >> d ;
double z,w ;

if (a>=b && a>=c && a>=d) {
    z = a;
    }else 
    if (b>=a && b>=c && b>=d) {
        z = b;
        }else 
        if (c>=a && c>=b && c>=d) {
            z = c;
            }else 
            if (d>=a && d>=c && d>=b) {
                z = d;
                }
                
if (a<=b && a<=c && a<=d) {
    w = a;
    }else 
    if (b<=a && b<=c && b<=d) {
        w = b;
        }else 
        if (c<=a && c<=b && c<=d) {
            w = c;
            }else 
            if (d<=a && d<=c && d<=b) {
                w = d;
                }

double v; v= ((a+b+c+d)-(z+w))/2;
cout<< round(v*100.0)/100.0;
}        

