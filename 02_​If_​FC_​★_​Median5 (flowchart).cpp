#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a,b,c,d,e ; 
    cin >>a>>b>>c>>d>>e ; 
    int x=a ;
    if (a>b) {
        a=b; b=x;
    }
    int y=c ;
    if (c>d) {
        c=d; d=y;
    }
    int z=b;
    if (a>c) {
        b=d; d=z;
        c=a;
    }
    a=e;
    x = a;
    if (a>b) {
        a=b; b=x;
    }
    z = b;
    if (c>a) {
        b=d; d=z;
        a=c;
    }
    if (a>d) {
        cout<< d;
    }else 
        cout << a;
}