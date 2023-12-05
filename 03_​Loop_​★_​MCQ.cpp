#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b ; //a=key
    int y=0;
    getline(cin,a); 
    getline(cin,b); 
    int i=0;
    if (a.length()!=b.length()) {
        cout<< "Incomplete answer";}
    else {
            while (i<=b.length() && i<=a.length()) {
                if(i != b.length()){
                if (b[i]==a[i]) {
                y++; }
                i++;}else{
                cout<<y;
                break; }
                }
}}