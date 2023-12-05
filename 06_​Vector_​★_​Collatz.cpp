#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin>>n; int N=n;
    vector <int> keep;
    while (n!=1) {
        if (n%2==0) {
            n=n/2;
            keep.push_back(n);
        }
        else {
            n=(3*n)+1;
            keep.push_back(n);
        }
    }
   
    if (keep.size()>=15) {
        for (int i=keep.size()-15; i<keep.size(); i++) {
        if (i==keep.size()-1) {
            cout<<keep[i];
        }
        else {
            cout<<keep[i]<<"->";
        }
        }
    }
    else {
        cout<<N<<"->";
        for (int i=0; i<keep.size(); i++) {
        if (i==keep.size()-1) {
            cout<<keep[i];
        }
        else {
            cout<<keep[i]<<"->";
        }
        }
    }
    

}