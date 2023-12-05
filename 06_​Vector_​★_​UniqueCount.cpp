#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector <int> y; string x; getline(cin,x); string temp;
    for (int i=0; i<x.length(); i++) {
        if (x[i]==' ') {
            y.push_back(stoi(temp));
            temp="";
        }
        else {
            temp+=x[i];
        }
        if (i==x.length()-1) {
            y.push_back(stoi(temp));
        }
    }
    
    sort(y.begin(),y.end());

    vector <int> ans; 
    for (int i=0; i<y.size(); i++) {
        if (i==0) {
            ans.push_back(y[i]);
        }
        else if (y[i]!=y[i-1]) {
            ans.push_back(y[i]);
        }      
       }
    
    cout<<ans.size()<<endl;
    if (ans.size()>10) {
       for (int i=0; i<10; i++) {
        cout<<ans[i]<<" ";
        }
    }
    else {
        for (int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }

    }
    
    

    
}
