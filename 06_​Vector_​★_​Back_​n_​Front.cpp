#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector <string> one; vector <string> two; vector <string> three;
    int n; cin>>n; string numone;
    for (int i=0; i<n; i++) {
        cin>>numone;
        one.push_back(numone);
    }
    string numtwo; cin.ignore(); getline(cin,numtwo); string temp="";
    for (int i=0; i<numtwo.length(); i++) {
        if(numtwo[i]==' '){
            two.push_back(temp);
            temp="";
        }
        else{
            temp+=numtwo[i];
        }
        if(i==numtwo.length()-1){
            two.push_back(temp);
        }
    }
    string numthree;
    while(true) {
        cin>>numthree;
        if (numthree=="-1") {break;}
        three.push_back(numthree);
    }

    vector <string> ans; auto a= ans.begin();
    int count=0; //used count instead of i j k
    for (int i=0; i<one.size(); i++) {
        if (count%2==0) {
            ans.push_back(one[i]);
            count++;
        }
        else { 
            a= ans.begin();
            ans.insert(a,one[i]);
            count++;
        }
    }
    a= ans.begin();
     for (int j=0; j<two.size(); j++) {
        if (count%2==0) {
            ans.push_back(two[j]);
            count++;
        }
        else {
            a= ans.begin();
            ans.insert(a,two[j]);
            count++;
        }
    }
    a= ans.begin();
     for (int k=0; k<three.size(); k++) {
        if (count%2==0) {
            count++;
            ans.push_back(three[k]);
        }
        else {
            a= ans.begin();
            ans.insert(a,three[k]);
            count++;
        }
    }
    for (int i=0; i<ans.size(); i++) {
        if (i==0){
            cout<<"["<<ans[i];
        }
        else if (i==ans.size()-1) {
            cout<<", "<<ans[i]<<"]";
        }
        else {
            cout<<", "<<ans[i];
        }
        
    }
}