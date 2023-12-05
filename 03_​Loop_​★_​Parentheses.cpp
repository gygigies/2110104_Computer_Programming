#include <iostream>
#include <string>
using namespace std;
int main() {
    string x ;

    getline(cin,x);
   
        for (int i = 0; i < x.length(); i++) {
            if (x[i]=='(') {
                x[i]= '[';}
            else if (x[i]=='[') {
                x[i]= '(';}
            else if (x[i]==')') {
                x[i]= ']';}    
            else if (x[i]==']') {   
                x[i]= ')';}
        }
        cout << x;
}


    

