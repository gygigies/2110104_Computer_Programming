#include <iostream>
#include <string>
using namespace std;
int main() {
    string x ; 
    while (getline(cin,x)) {
        if (x.length()<8 && x.length()>0) { 
            cout << ">> " << "invalid" <<endl; continue;}
        if (x.length()==0) {
            break;} 
        bool a = false , b=false , c= false; 
        bool d= false;
        for (int i=0; i<=x.length(); i++ ) {
            if (x[i]>='0'&& x[i]<='9') { a=true;}
            if (x[i]>='A' &&  x[i]<='Z') { b=true;}
            if (x[i]>='a' &&  x[i]<='z') { c=true;}
            if ((x[i]>=33 && x[i]<=47) || ( x[i]>=58 && x[i]<=64) || ( x[i]>=91 && x[i]<=96) || (x[i]>=123 && x[i]<=127))
            {d=true;}
        }

    if (a && b && c )   {
        if (x.length()>=12 && d) {
            cout<< ">> " << "strong" <<endl;
        }
        else if (x.length()>=8) {
            cout<< ">> " << "weak" <<endl; 
        }
        else {
            cout << ">> " << "invalid" <<endl;}
        }
    else {
        cout << ">> " << "invalid" <<endl;
    }

}
}

