//locationanalysis
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    long long keyid; string a;
    vector <string> city;
    vector <long long> arrange; 
    map <long long,vector<string>> input;
    for (int i=0; i<n; i++) {
        cin>>keyid; 
        arrange.push_back(keyid);
        while (cin>>a) {
            if (a=="*") break;
            city.push_back(a);  
        }
        input[keyid] = city ;
        city.clear();
    }
    long long idcheck; cin>>idcheck;
    vector <string> check = input [idcheck] ;
    set <long long int> answer;
    for (auto k : check) {
        for (auto & r : input ) {
            for (auto t : r.second ) {
                if (t==k && r.first!=idcheck) {
                    answer.insert(r.first);}
            }
        }
    }
    if (answer.size()==0) {
            cout<<">> Not Found";}
    else{
        for (auto p : arrange) {
            if(answer.find(p)!=answer.end()) {
                cout<<">> "<<p<<endl;
            }
        } 
    }
}