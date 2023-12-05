#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n;
    cin.ignore();
    bool status = 1;
    int N=1;
    string x;
      
    while (N<=n) {
        getline(cin,x);
        int sum=0;
        int i =0;
        status=1;
    if (x[0]!='R') {
        cout<< "WRONG_INPUT"<<endl; status = 0;}

    
    else {
    
        while (x[i]=='R' && x[i+2]!='R') {
            sum+=1;
            if (x[i+2] =='Y' ) {
            sum+=2;}
            if (x[i+2] == 'G' ){
            sum+=3;}
            if (x[i+2] == 'N' ) {
            sum+=4;}
            if (x[i+2] == 'B' ) {
            sum+=5;}
            if (x[i+2] == 'P' ) {
            sum+=6;}
            if (x[i+2] == 'K' ) {
            sum+=7;}
            
            i+=4;     
            }
        if (x[i]=='R' && x[i+2]=='R') {
            cout<< "WRONG_INPUT"<<endl; status = 0;}

        if (x[i]!='R') {
            if (x[i]=='Y' && x[i+2]=='G'&& x[i+4]=='N'&& x[i+6]=='B' && x[i+8]=='P'&& x[i+10]=='K'){
                sum+=27;}
            else if (x[i]=='Y' && x[i+2]=='G'&& x[i+4]=='N'&& x[i+6]=='B' && x[i+8]=='P') {
                sum+=20;}
            else if (x[i]=='Y' && x[i+2]=='G'&& x[i+4]=='N'&& x[i+6]=='B') {
                sum+=14;}
            else if (x[i]=='Y' && x[i+2]=='G'&& x[i+4]=='N') {
                sum+=9;}
            else if (x[i]=='Y' && x[i+2]=='G') {
                sum+=5;}
            else if (x[i]=='Y') {
                sum+=2;}
            else if (x[i]!='Y' && x[i+2]!='G'){
                cout<< "WRONG_INPUT"<<endl; status = 0; 
            }
            
            }
            
        }
        if (status) cout<<sum<<endl;
        N++;
    }
}
    


