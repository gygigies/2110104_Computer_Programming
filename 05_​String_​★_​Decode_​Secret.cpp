#include <iostream>
#include <string>
using namespace std;
int main() {
    string x; 
    
    while (getline(cin,x)) {
        int xlen=x.length();
        char special=x[xlen-1];
        int count =0;
        string ans="";
        int keep[2]={0};
        for(int i=0; i<xlen; i++) {
            if (x[i]==special) {
            keep[count]=i;
            count++;    
             }
            if (count==2) {
            ans+=x.substr(keep[0]+1,keep[1]-keep[0]-1);
            count=0;
             }
        }
        cout<<ans<<endl;
    }
    
}


    