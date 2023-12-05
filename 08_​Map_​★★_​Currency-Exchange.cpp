//currency
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n; 
    string want, currency, input; 
    int money=0;
    string currency; double rate ;
    map <string,double> allrate ; 
    for (int i=0 ; i<n; i++) {
        cin >> currency >> rate;
        allrate [currency] = rate ;
    }
    allrate ["THB"] = 1;
    cin>> money; cin>> currency; 
    cout << money << " "<<currency;
    string temp="";
    while (cin >> input) {
        double A = allrate [currency];
        double B = allrate [input];
        cout<<" -> "<< int(money*A/B) <<" " << input;
        currency = input; money = int(money*A/B);  
    }     
}



