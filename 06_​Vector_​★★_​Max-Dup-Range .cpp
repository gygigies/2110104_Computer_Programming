#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string x; getline(cin,x);
    vector <string> y;
    string temp="";
    x += ' ';
    for (int i=0; i<x.length(); i++ ) {
        if (x[i]==' ') {
            y.push_back(temp);
            temp="";
        }
        else {
            temp+=x[i];
        }
    }
   int start,stop; string num=""; int max=0,maxx;
    string ans; vector <string> anss;
    for (int i=0; i<y.size(); i++){
        string n = y[i];
        start = i;
        for (int j=i; j<y.size(); j++) {
            if (y[j]!=n){
                stop = j;
                i = j-1;
                break;
            }
            else if (j==y.size()-1) {
                stop=j+1;
            }
        }
        maxx=stop-start;
        if (maxx>max) {
            max=maxx;
        }
    }


    // for (int i=0; i<y.size(); i++) {
    //     if (y[i]==y[i+1] && num!=y[i]) {
    //         num=y[i];
    //         start=i;
    //         for (int l=i; l<y.size(); l++) {
    //             if (y[l]==num && y[l+1]!=num || l==y.size()-1) {
    //                 stop=l+1;
    //                 break;
    //             }
    //         }
        //     if (stop-start==max) {
        //         ans=num+" -->  x[ "+to_string(start)+" : "+to_string(stop)+" ]";    
        //         anss.push_back(ans);
        //     }
        // }
        // else if (max==0) {
        //     start=i; stop=i+1; num=y[i];
        //     ans=num+" -->  x[ "+to_string(start)+" : "+to_string(stop)+" ]";
        //     anss.push_back(ans);
        // } 
    
   

   for (int i=0; i<y.size(); i++){
        string n = y[i];
        start = i;
        for (int j=i; j<y.size(); j++) {
            if (y[j]!=n){
                stop = j;
                i = j-1;
                break;
            }
            else if (j==y.size()-1) {
                stop=j+1;
            }
            
        }
        if (stop-start==max) {
                ans=y[i]+" -->  x[ "+to_string(start)+" : "+to_string(stop)+" ]";    
                anss.push_back(ans);
        }
    }
    
    sort(anss.begin(),anss.end());

    for (int i=0; i<anss.size(); i++) {
        cout<<anss[i]<<endl;
    }

}




