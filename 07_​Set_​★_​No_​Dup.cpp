#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    set <string> keep;
    int count;
    
    while(cin>>x) {
        if (x=="-1") break;
        keep.insert(x);
        if (keep.size()==count){
            cout<<count+1;
            return 0;
        }
        count = keep.size();
    }
    cout << "-1";
}
   