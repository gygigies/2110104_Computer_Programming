#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int xe; cin >> xe;
    int ye; cin >> ye;
    int re; cin >> re;
    int rp; cin >> rp;
    int xm; cin >> xm;
    int ym; cin >> ym;
    
    
    int c = re-rp; 
    int A = (xm-xe); 
    int B = (ym-ye);
    double C = sqrt((A*A)+(B*B));  

    double a = (c/C)*A;
    int xp = round(xe + a); 

    double b = (c/C)*B;
    int yp =  round(ye + b);
    
  
    cout<< xp << " " << yp;
    
}