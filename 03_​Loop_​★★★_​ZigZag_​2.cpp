#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b ;
    cin>>a;
    int w=0,x=0,y=0,z=0 ;
    int i=1;

    while (a!=-999 && a!=-998) {
        cin>>b;
        if (i%2==0) {
            int c=a;
            a=b; b=c;}
        w=min(w,a); x=max(x,a); 
        y=min(y,b); z=max(z,b);
        cin>>a;
        i++;}

    if (a==-998) {
        cout<<w<<" "<<z;}

    if (a==-999) {
        cout<<y<<" "<<x;}
       
    

}
    
    
   
   

   
    

    
    
    
    
   


   
    


     