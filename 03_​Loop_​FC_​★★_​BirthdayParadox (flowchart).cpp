#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float p; cin>>p;
    double k=1; double t=1;
    while (1-t<p) {
        k++;
        t=(t*(365-(k-1)))/365;
    }
    cout<<k;

}