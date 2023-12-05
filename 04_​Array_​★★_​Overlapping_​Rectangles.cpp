#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int x1[n], x2[n], y1[n],y2[n];
    for (int i=0; i<n; i++) {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }

    int a1[n],b1[n],a2[n],b2[n]; 

    int count = 0;
    for (int i=n-1; i>0 ; i--) {
        count+=i;
    }
    
    int oa[count] = {0,0,0,0,0,0}; 
    int m=0;
    for (int i=0; i<n-1; i++) {
        for (int l=i+1; l < n; l++) {
            a1[i]=max(x1[i],x1[l]);
            a2[i]=min(x2[i],x2[l]);
            b1[i]=max(y1[i],y1[l]);
            b2[i]=min(y2[i],y2[l]);
            if((a2[i]-a1[i]) > 0 && (b2[i]-b1[i]) > 0){
            oa[m]=abs((a2[i]-a1[i])*(b2[i]-b1[i]));
            }
            m++;
        }
    }
    int oamax = 0;

    for (int i=0; i<m; i++) {
        if (oa[i]>oamax) {
        oamax=oa[i];
        } 
    }
    int c[count]; int d[count];
    int countt=0;
    
    if (oamax==0) {
        cout<<"No overlaps";
    }
       
    else {
             for (int i=0; i<n-1; i++) {
                for (int l=i; l<n-1; l++) {
                c[countt]=i; d[countt]=l+1;
                countt++;
                }
             }
        cout<<"Max overlapping area = "<<oamax<<endl;
        
        for (int i=0; i<m; i++) {
            if (oa[i] == oamax) {
            cout<<"rectangles "<< c[i] << " and "<< d[i] <<endl  ; 
            }
        
        }
        
        }
    


   
   
    
}
