#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin>>x;
    
    if (x<=100 && x>0) {
        cout << "18";}
    if (250>=x  && x>100 ) {
        cout << "22";}
    if (500>=x && x>250) {
        cout << "28";}
    if (1000>=x && x>500) {
        cout << "38";}        
    if (2000>=x && x>1000) {
        cout << "58";}
    if (x>2000) {
        cout << "Reject";}        
}

