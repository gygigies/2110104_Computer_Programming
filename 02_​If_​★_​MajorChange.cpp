#include <iostream>
#include <string>

using namespace std;

int main() {

long long a ; cin>> a;
double b ; cin>> b;
string c ; cin>> c;
string d ; cin>> d;
string e ; cin>> e;
long long f ; cin>> f;
double g ; cin>> g;
string h ; cin>> h;
string i ; cin>> i;
string j ; cin>> j;

double x,y;

if (c >"A" || d >"C" || e >"C") {
    x=0;}    
else {x=b;}  


if (h >"A" || i >"C" || j >"C") {
    y=0;} 
else {y=g;}        

if (x==0 && y==0) {
    cout<< "None";} 

else if (x<y) {
    cout<<f;}

else if (x>y) {
    cout<<a;}

else if (x==y) {
    if ((d<i) || (e<j)) {
        cout<<a;}
    else if ((d>i) || (e>j)) {
        cout<<f;} 
     else { 
        cout<<"Both";}
}    


} 
