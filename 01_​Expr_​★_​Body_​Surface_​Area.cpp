#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {   
    double W;
    cin >> W;
    double H;
    cin >> H;


    double x;
    x = sqrt((W*H))/60 ;
    cout << setprecision(15) << x <<endl;
    x = 0.024265*pow(W,0.5378)*pow(H,0.3964) ;
    cout << setprecision(15) << x <<endl;
    x = 0.0333*pow(W,(0.6157-(0.0188*log10(W))))*pow(H,0.3) ; 
    cout << setprecision(15) << x;
}