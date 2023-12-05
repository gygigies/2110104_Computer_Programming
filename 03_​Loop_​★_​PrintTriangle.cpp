#include <iostream>
#include <string>
using namespace std;
int main(){
    int h; cin>>h;
    int n=2*h-1;
    int col=h , a=h , b=h ;
    for (int row=1; row<=h; row++) {
        if (row==h) {
            while (n--) {
                cout<<"*";
            }
            break;
        }
    
        for (int i = 1; i<=col; i++) {
            if (a==i || b==i) {
                cout<<"*";}
            else {
                cout<<".";} 
        }
    col++; a++; b--; 
    cout<<endl;
    
    }
}
