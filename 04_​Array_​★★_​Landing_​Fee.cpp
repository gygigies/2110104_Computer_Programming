#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n; cin.ignore();
    string one[n]; 
    int two[n];
    for (int i=0; i<n; i++) {
        cin>>one[i]>>two[i];
    }

    cin.ignore();
    string x; getline(cin,x);
    int xlen=x.length();
 
    int k = (xlen+1)/7;
    string y[k];
    
    for( int i=0; i<k;i++) {
        y[i]=x.substr(7*i+4,2); 
    }

    int sum=0;
    for(int d=1; d<k; d++) {
        if (y[d]!=y[d-1]){
            for(int i=0; i<n; i++){
                if(y[d]==one[i]) {
                    sum+=two[i];
                    break;
                }
                
        
             
            }
        }
     
    
        
    }
    cout<<sum<<endl; 
}

   

    
  
    
