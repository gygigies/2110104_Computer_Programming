#include <iostream>
#include <string>
using namespace std;
int main() {
    string x; cin>>x;
    int count=0; int cnt = 0; int pleasestop = 0;
    string ans; int xlen=x.length(); int keep[2];
    if (x[0]>=97 && x[0]<=122) {
            keep[count]=0;
            count++;}
    
    for (int i=0; i<xlen; i++) {
        for(int l = 0; l < xlen ;l++){
            if(x[l] >= 'a' && x[l] <= 'z'){
            cnt++;
            }
        }
        if(cnt == xlen){
            cout << x;
            break;
        }
        if (x[i]>=65 && x[i]<=90) {
            keep[count]=i;
            count++;}
        if (x[i]>='0' && x[i]<='9') {
            keep[count]=i;
            if (x[i-1]>='0' && x[i-1]<='9'){
                count--;
            }
            count++;}
        
        if (i == xlen-1 && x[i] >= '0' && x[i] <= '9'){
            keep[count]=i+1;
            count++;
        }
        if(x[i-1] >='0' && x[i-1] <='9' && x[i] >= 'a' && x[i] <= 'z'){
            keep[count]=i;
            count++;
        }
        if(x[keep[0]] >= 'A' && x[keep[0]] <= 'Z' && i == xlen-1 && x[i] >= 'a' && x[i] <= 'z'){
            ans = ans+x.substr(keep[0],xlen-keep[0]);
        }
        if(x[i] >= 'A' && x[i] <= 'Z' && x[keep[0]] >= 'A' && x[keep[0]] <= 'Z' && i == xlen-1){
            while(true){
            if(pleasestop == 1){
            ans = ans + ", " + x.substr(xlen-1,1);
            break;
            }
            pleasestop++;
            break;
            }
        }
        if (count==2) {
            ans+=x.substr(keep[0],keep[1]-keep[0]);
            if (i!=xlen-1){ans+=", ";}
            count=0;
            i=i-1;
            if(i == xlen-2 && x[i] >= '0' && x[i] <= '9' && x[i+1] >= 'a' && x[i+1] <= 'z'){
            ans = ans+", "+x.substr(xlen-1,1);
            }
        }
    }
    cout<<ans;
}