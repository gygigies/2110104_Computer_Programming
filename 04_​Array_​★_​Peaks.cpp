#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n;
    int x[n];
    int count=0;
    
    for (int i=0; i<n; i++) {
        cin>>x[i];
    }  

    for (int l=1; l<n-1; l++) {
        if (x[l]>x[l-1] && x[l]>x[l+1]) {
            count++;
        }
    }

    cout<<count;

    
}


    