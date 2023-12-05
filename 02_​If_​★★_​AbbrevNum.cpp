#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string x; cin>>x;
    int n = x.length();
    double w = stod(x);
    
    double y;

    if (n>3 && n<=6) {
        y=w/1000;
        if (n==4) {
        cout<<round(y*10)/10.0<<"K";} 
        if (n==5) {
        cout<<round(y)<<"K"; }
        if (n==6) {
        cout<<round(y)<<"K"; }
    }
    if (n>6 && n<=9) {     
        y=w/1000000;
        if (n==7) {
        cout<<round(y*10)/10.0<<"M";} 
        if (n==8) {
        cout<<round(y)<<"M"; }
        if (n==9) {
        cout<<round(y)<<"M"; }    
        
        }
    if (n>9) {
        y=w/1000000000;
        if (n==10) {
        cout<<round(y*10)/10.0<<"B";} 
        if (n>=11) {
        cout<<round(y)<<"B"; }
        }
    if (n<=3) {cout<<x;}
    }  

    
   


    
