#include <iostream>
#include <cmath>
#include <string>

using namespace std;
 int main()
 { double a;
    cin >> a;
    a -= 543;
    
    string b = to_string(a);

    
    b = b.substr(2,2);
    
    int y;
    y = stoi(b);

    
    int d  = y/4;
    

    int e;
    e= (y+d+11);

    int z;
    z = e % 7;
    cout << z;
 


 }
   
  
   