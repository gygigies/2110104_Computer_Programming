#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long gcd(long a, long b) {
if (b == 0) return a;
return gcd(b, a%b);
}
 
int main()  {
double x; cin>>x;
string y,z; cin>>y>>z;
string v=y+z;
double u =stod(v);
double s =stod(y);

int r = v.length();
int q = y.length();

long long m = (pow(10,r)-pow(10,q));


long long n = gcd((x*m+(u-s)),m);

cout << ((x*m)+(u-s))/n <<" "<< "/"<<" " << m/n ;


}
