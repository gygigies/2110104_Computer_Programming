#include <iostream>
#include <string>
using namespace std;
int main() {
    string x; getline(cin,x);
    int n = x.length();
    char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char A[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (int i=0; i <26; i++) {
        int count=0;
        for (int l=0; l<n; l++ ) {
            if (a[i]==x[l]||A[i]==x[l]) {
            count++;}}
        if (count>0) {
            cout<<a[i]<<" -> "<<count<< endl;}
    }

    
}