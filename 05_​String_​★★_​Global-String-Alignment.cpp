#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int min(int x, int y){
    if (x<y) x = y; 
    return x;
}
int main() {
    string x,y; cin>>x>>y;
    int xlen=x.length(); int ylen=y.length(); int A=ylen;
    string X=x; string Y=y;
    int pos1[ylen+xlen]{0};
    int pos2[ylen+xlen]{0};
    int posl1=0; int posl2=0; int maxx1=0,maxx2=0,maxx=0;
    string last;    
        
    if (ylen>xlen) {
        ylen=xlen;
        xlen=A;
    } 
    
            for (int l=0; l<ylen; l++) {  
                int count=0;
                int minmin=min(X.length(),ylen);
                for (int i=0; i<minmin; i++) {
                    if (X[i]==y[i]){
                        count++;
                    }
                }
                pos1[l]=count;
                X="-"+X;
            }
            
            
            for (int l=0; l<xlen; l++) { //เลื่อนyไปขวา
            int count=0;
            int minmin=min(Y.length(),xlen);
                for (int i=0; i<minmin; i++) {
                    if (Y[i]==x[i]){
                    count++;
                    }
                }
            pos2[l]=count;
            Y="-"+Y;
            
            }
            for (int i=0; i<ylen; i++) {
                if (pos1[i]>maxx1){
                posl1=i;
                maxx1=pos1[i];
                }
            }

            for (int i=0; i<xlen; i++) {
                if (pos2[i]>maxx2){
                posl2=i;
                maxx2=pos2[i];
                }
            }

            if(maxx1 > maxx2 ) {
                maxx=maxx1;
                for (int i=0; i<posl1; i++) {
                    cout<<"-";
                }
                cout<<x<<endl<<y<<endl<<maxx;

            
            }
            else if(maxx2 > maxx1 ) {
                maxx=maxx2;
                cout<<x<<endl;
                for (int i=0; i<posl2; i++) {
                    cout<<"-";
                }
                cout<<y<<endl<<maxx;
            }

            else if (maxx1==maxx2) {
                if (posl1<=posl2) {
                    maxx=pos1[posl1];
                    for (int i=0; i<posl1; i++) {
                    cout<<"-";
                    }
                    cout<<x<<endl<<y<<endl<<maxx;
                }
                else if (posl1>posl2) {
                    maxx=pos2[posl2];
                    cout<<x<<endl;
                    for (int i=0; i<posl2; i++) {
                        cout<<"-";
                    }
                    cout<<y<<endl<<maxx;
                }
            }
           
}