#include <iostream>
using namespace std;
int main() {
    string t; cin>>t;
    int k; cin>>k;
    int tlen=t.length();
    int r=1; int s=0;

    
    for ( int i=0;i<=tlen; i++ ) {
         if (t[i]==t[i+1]) {
                r++;}
            
        else {
           if (r<k) {
            while (s<r){
                if (r==1) {
                    cout<< t[i]; break;
                }
                else {
                    cout<<t[i-1]; s++;
                }
            }
            
             }
            
            s=0; r=1;

        }
    }

} 
            
       