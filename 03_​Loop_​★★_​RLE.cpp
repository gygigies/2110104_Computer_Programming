#include <iostream>
#include <string>
using namespace std;
int main() {
    string x; cin>>x;
    int pos=1;  
    
    for (int i=0; i<x.length(); i++) {
        
        if (x[i+1]==x[i]) {
            pos++;
        }
        
        else { 
            cout<<x[i]<<" "<<pos<<" ";
            pos=1;   
    }

   
    }
}
   