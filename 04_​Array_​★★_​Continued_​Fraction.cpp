#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n; cin>>n;
    double a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];   
    } 
    double b[n];
    for(int i=0; i<n; i++) {
        b[i]=a[i];
        for(int l=i; l>0; l--){
            if(i==1){
            b[i]=a[l-1]+(1/a[l]);}
            else{
            b[i]=a[l-1]+(1/b[i]);
            }
        }
        if (i==0) {
            cout<<a[i]<<endl;
        }
        else {
        cout<<setprecision(10)<<b[i]<<endl;
        }
    }
}