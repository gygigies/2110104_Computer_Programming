#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string x; cin>>x;
    string y=x+"$";
    vector <char> alp; char pos; string k; vector <string> keep;
    for (int i=0; i<y.length(); i++ ) {
        alp.push_back(y[i]);
    }
    
    for (int i=0; i<y.length(); i++) {
        pos=alp[0];
        alp.erase(alp.begin());
        alp.push_back(pos);

        for (int l=0; l<alp.size(); l++) {
            k+=alp[l];
        }
        keep.push_back(k);
        k="";
    }
    sort(keep.begin(),keep.end());

    string ans; char lans; string anss=""; 
    for (int i=0; i<keep.size(); i++) {
        ans=keep[i];
        lans=ans[ans.length()-1];
        anss+=lans;
   }
    cout<<anss;
}
