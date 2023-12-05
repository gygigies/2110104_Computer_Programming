#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double  sum = 0;
    double n;
    double i = 0;
    cin>>n;
    if (n==-1) {
        cout << "No Data";
    }
    else {
        while (n!=-1) {
        sum+=n;
        cin>>n;
        i++;
        }
    cout << round(sum/i*100)/100;}
}

    