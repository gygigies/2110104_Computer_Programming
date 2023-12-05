#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
   string m,n ; cin>>m>>n;
   int mlen=m.length() , nlen=n.length(); 
   long long M=stoll(m); long long N=stoll(n);
   
    long long ans=0;
    if (mlen==nlen) {
        if(M!=N) {
            cout<<(N-M+1)*mlen;
        }
        else {
            cout<<mlen;
        }
    }
    else {
       
       for (int i=mlen+1; i<nlen; i++) {
         ans+=i*9*(long long)pow(10,i-1);
       }
       cout<<(((long long)pow(10,mlen)-M)*mlen)+((N-(long long)pow(10,nlen-1)+1)*nlen)+ans;
    }

        

}
