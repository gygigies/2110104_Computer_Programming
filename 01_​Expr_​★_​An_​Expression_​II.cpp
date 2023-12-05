#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; cin>>x;
    double a = pow((x+1),2);
    double b = log(a);

    double y=(pow(x,(sqrt(b))))/(10-x);

    cout<<round(y*1e6)/1e6;



    
    

}