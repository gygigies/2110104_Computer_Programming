#include <iostream>
using namespace std;
int main() {
    string a,n;
    while (cin>>a) {
        cin>>n;
    

    int alen=a.length();
    int A = stoi(a.substr(alen-1,1));
    

    n ="000" + n;
    int nlen=n.length();
    string M= n.substr(nlen-2,3);
    int N=stoi(M);

    if (N==0) {
        cout<<">> "<<1;
    }
    else if(A==0 || A==1 || A==5 || A==6 ) {
        cout<<">> "<<A;
    }

    else if (A==2 && N!=0) {
        if (N%4==0) {cout<<">> "<<6;}
        if (N%4==1) {cout<<">> "<<2;}
        if (N%4==2) {cout<<">> "<<4;}
        if (N%4==3) {cout<<">> "<<8;}

    }
     else if (A==3 && N!=0) {
        if (N%4==0) {cout<<">> "<<1;}
        if (N%4==1) {cout<<">> "<<3;}
        if (N%4==2) {cout<<">> "<<9;}
        if (N%4==3) {cout<<">> "<<7;}

    }
     else if (A==7 && N!=0) {
        if (N%4==0) {cout<<">> "<<1;}
        if (N%4==1) {cout<<">> "<<7;}
        if (N%4==2) {cout<<">> "<<9;}
        if (N%4==3) {cout<<">> "<<3;}

    }
     else if (A==8 && N!=0) {
        if (N%4==0) {cout<<">> "<<6;}
        if (N%4==1) {cout<<">> "<<8;}
        if (N%4==2) {cout<<">> "<<4;}
        if (N%4==3) {cout<<">> "<<2;}

    }
    else if (A==4 && N!=0) {
        if (N%2==0) {cout<<">> "<<6;}
        if (N%2==1) {cout<<">> "<<4;}

    }
    else if (A==9 && N!=0) {
        if (N%2==0) {cout<<">> "<<1;}
        if (N%2==1) {cout<<">> "<<9;}

    }

    

    cout<<endl;
  

    }
}