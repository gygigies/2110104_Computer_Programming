#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{ 
    string a; cin >> a;

    int b = a[0]-'0';
    int c = a[1]-'0';
    int d = a[2]-'0';
    int e = a[3]-'0';
    int f = a[4]-'0';
    int g = a[5]-'0';
    int h = a[6]-'0';
    int i = a[7]-'0';
    int j = a[8]-'0';
    int k = a[9]-'0';
    int l = a[10]-'0';
    int m = a[11]-'0';

    
    int n;
    n =  (11-(((13*b)+(12*c)+(11*d)+(10*e)+(9*f)+(8*g)+(7*h)+(6*i)+(5*j)+(4*k)+(3*l)+(2*m)) %11))%10 ;
  

    cout<<b<<"-"<<c<<d<<e<<f<<"-"<<g<<h<<i<<j<<k<<"-"<<l<<m<<"-"<<n; 
   



}
