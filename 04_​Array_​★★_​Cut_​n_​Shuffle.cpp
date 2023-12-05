#include <iostream>
using namespace std;
int main() {
    int n; 
    cin>>n;
    string x[n];
    for (int i=0; i<n; i++) {
        cin>>x[i];
    }
    cin.ignore();
    string y; getline(cin,y);
    int ylen=y.length();
    string one[n/2];
    string two[n/2];

    for (int l=0; l<ylen; l++ ){
        if (y[l]=='C') {
            for(int i=0; i<n/2; i++) {
                swap(x[i],x[i+(n/2)]);
            }   
        }
        
        else if (y[l]=='S') {
            for (int i=0; i<n/2;i++) {
                one[i]=x[i];
                } 
            for (int i=n/2; i<n; i++) {
                two[i-n/2]=x[i];
                }

            for (int i=0; i<n/2; i++) {
               x[2*i]=one[i];
               x[2*i+1]=two[i];
            }

           

        }
    }
    
    
    
    for(int i=0; i<n; i++){
        cout<<x[i]<<" ";
    }
   
}


