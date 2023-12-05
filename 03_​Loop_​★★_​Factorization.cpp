#include <iostream>
using namespace std;
int main() {
    long long x; cin>>x;
    
    for (int k =2; k<=x; k++) {
            while (x%k==0) {
            x=x/k;
            
            if (x!=1) {
                cout<<k;
                cout<<"*";
            }
            else {
                cout<<k;
            }
            
            }

            
        }
    }
