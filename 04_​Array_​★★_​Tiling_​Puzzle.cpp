#include <iostream>
using namespace std;
int main(){
    int m; cin>>m;
    int k=m*m;
    int n[k];
    for(int i=0; i<k; i++) {
            cin>>n[i];   
    }
    
    int count=0;
    int pos;
    for(int i=0; i<k-1; i++){
        if(n[i]==0 ){
            pos=i;
        }
        for(int l=i+1; l<k; l++){
            if(n[i]!=0 && n[l]!=0 && n[i]>n[l]) {
                count++;
            }

            
        }
    }

    int row=pos/m;
    
    if (m%2==1 && count%2==0 ) {
        cout<<"YES"; 
    } 
    else if (m%2==0 && count%2==1 && row%2==0  ) {
        cout<<"YES";
    }
    else if (m%2==0 && count%2==0 && row%2==1 ) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}