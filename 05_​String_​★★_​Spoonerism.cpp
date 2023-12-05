#include <iostream>
#include <string>
using namespace std;
int main() {
    string x; getline(cin,x);
    int xlen=x.length();
    string first[2]; string last[2];
    int pos; string lastsud; string mid; int s1; int s2;
    for (int i=0; i<xlen; i++) {
        if (x[i]== 97|| x[i]== 101||x[i]== 105 ||x[i]== 111 ||x[i]== 117) {
            first[0]=x.substr(0,i);
            pos=i; break;}
    }
    for (int i=0; i<xlen; i++) {   
        if (x[i] == ' ') {
            first[1]=x.substr(pos,i-pos+1);
            s1=i;
            break;}
    }
    for (int i=xlen-1; i>0;i--){
        if (x[i]== 97|| x[i]== 101||x[i]== 105 ||x[i]== 111 ||x[i]== 117) {
            last[1]=x.substr(i,xlen-i);
            pos=i;}
        if (x[i] == ' ') {
            last[0]=x.substr(i+1,pos-i-1);
            s2=i;
            break;}
    }
    mid=x.substr(s1,s2-s1+1);
    lastsud = first[0]+last[1]+mid+last[0]+first[1];
    cout<<lastsud;
}