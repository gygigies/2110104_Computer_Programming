//icecream
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string brand; double price;
    map <string,double> sales; map <string,double> allprice;
    for (int i=0; i<n; i++) {
        cin>> brand >> price;
        allprice[brand]= price;}
    int m; cin>>m;
    for (int i=0; i<m; i++) {
        cin>>brand>>price;
        if (sales.find(brand)!=sales.end()) {
            sales[brand]+=price;}
        else {
            sales[brand]=price;}}
    double total = 0;
    double max=0;
    for (auto & u : allprice ) {
        for ( auto & k : sales ) {
            if(k.first==u.first) {
                double count=(u.second)*(k.second);
                total+=count;
                k.second = count;
                if (count>max){
                    max=count; } } }
    } 
    if (total >0) {
        cout<<"Total ice cream sales: "<<total<<endl;
        cout<<"Top sales:"; 
        for ( auto & k : sales ) {
            if (k.second==max) {
                cout<<" "<<k.first;}}
    }
    else {cout<<"No ice cream sales"}
}

