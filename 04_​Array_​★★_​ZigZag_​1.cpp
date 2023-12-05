#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int r; cin>>r;
    int x[r]; int y[r];
    int m=1e9,n=-1e9,o=1e9,p=-1e9;
    int a,b;

    for (int i=0; i<r; i++) {
        if (i%2==0) { cin>>a; cin>>b;
        x[i]=a; y[i]=b; }
        else {cin>>a; cin>>b;
        x[i]=b; y[i]=a;}

        m=min(m,x[i]); n=max(n,x[i]);
        o=min(o,y[i]); p=max(p,y[i]);

    }
   
    string s; cin>>s;

    if (s=="Zig-Zag") {
        cout<<m<<" "<<p;
    }
    if (s=="Zag-Zig") {
        cout<<o<<" "<<n;
    }
}