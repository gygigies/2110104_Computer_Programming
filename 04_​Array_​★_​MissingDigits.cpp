#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
   string m; getline(cin,m);
   int mlen = m.length();
    int number[10]= {0,1,2,3,4,5,6,7,8,9};  
    int q =0; int o =0;
    int t[o];
   

    for (int i=0; i<10; i++ ) {
        bool remove=false;
        for (int l=0; l<mlen; l++) {
            if (number[i]==m[l]-'0') {
                remove=true; break;
                }
        }
    
    if (!remove) {
        o++;
        t[q]=number[i];
        q++;
        }
}
        if (q==0) {
            cout<<"None";
        }
        
        else {  
        for (int i=0; i<o; i++) {
        if (i==0) {
            cout<<t[i];
        }
        else {
            cout<<","<<t[i];}
    
        }
        }
}

    