#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int row,col; cin>>row>>col; 
    int n=row*col;
    double x[n];
    
    for(int i=0; i<n; i++) {
      cin>>x[i];  
    }

    int u=0;
    for (int l=0; l<(row-2)*col; l+=col) {
        for (int i=l; i<col-2+(col*u); i++) {
            double sum = (x[i]+x[i+1]+x[i+2]+x[i+col]+x[i+col+1]+x[i+col+2]+x[i+col+col]+x[i+col+col+1]+x[i+col+col+2])/9;
        cout<<round(sum*100)/100.0<<" ";
        }u++;
        cout<<endl;
    }

}