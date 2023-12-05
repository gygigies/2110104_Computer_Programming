//skytrain
#include <bits/stdc++.h>
using namespace std;
int main() {
    multimap  <string,string> station;
    string a , b ;
    string last;
    set <string> output;
    while(cin>>a) {
        if (!(cin>>b)) {
           last=a;}
        else {
            if (b=="0") {
                last=a;
                break;}
            station.insert(make_pair(a,b));}
    } 
    string keep="";
    for (auto & t : station ) {
        if (t.first==last) {
            output.insert(t.second);
            keep=t.second;}
        else if (t.second==last) {
            output.insert(t.first);
            keep=t.first;}
        for (auto & u : station ) {
            if (u.first==keep) {
                output.insert(u.second);}
            else if (u.second==keep) {
                output.insert(u.first);}
        } 
   }
    for (auto & t : output ) {
        cout<<t<<endl;}
    if (output.size()==0) {
         cout<<last;
    }
}