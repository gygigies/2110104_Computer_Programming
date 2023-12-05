#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n;
    string x[n];
    string y;
    string a[10]={"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string b[10]={"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};

    
    
    for (int i=0; i<n; i++) {
        cin>>y;
        x[i]=y; 
    }
    
    bool check=false;

    for (int i=0; i<n; i++){
        for (int l=0; l<10; l++){
            if (x[i]==a[l]) {
                cout<<b[l]<<endl;
                check=true;
            }
            else if (x[i]==b[l]) {
                cout<<a[l]<<endl;
                check=true;
                
            } 
        }
        if (!check) {
            cout<< "Not found"<<endl;
        }
        check=false;
    }
}
    


    

