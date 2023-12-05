#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector <pair<string,double>> first; string code; double price;
    
    while(true) {
        cin>>code;
        if (code=="END") {
            break;}
        cin>>price;
        first.push_back(make_pair(code,price));
    }
    vector <string> lastest; string last; string codeo;
    cin.ignore(); getline(cin,last);
    int pos1; int pos2; double count=0; int pos;

    for(int i=0; i<last.length(); i++) {
        if (last[i]==' ') {
            lastest.push_back(last.substr(0,i));
            break;}
    }
    for(int i=0; i<last.length(); i++) {
            
        if (last[i]==' ' && count==0) {
            pos1=i;
            count++;}
        else if (last[i]==' ' && count==1) {
            pos2=i;
            count++;}
        if (count==2) {
        codeo=last.substr(pos1+1,pos2-pos1-1);
        count=0; 
        lastest.push_back(codeo);
        i--;}
    }
    
    for(int i=last.length()-1; i>0; i--) {
        if (last[i]==' ') {
            pos=i;
            lastest.push_back(last.substr(i+1,last.length()-1-i));
            break;}
    }

/*auto itr=lastest.begin();
while (itr!=lastest.end()) {
    cout<<lastest[itr];
}*/

    vector <pair<double,string>> ans;
     

    for (int l=0; l<first.size(); l++) {
        double pp; auto f= first[l];
        auto ll=f.first; double lll=f.second;
        count=0;
        for (int i=0; i<lastest.size(); i++) {
          if (ll==lastest[i]) {
            count++;} 
        }
        pp=count*lll;
        ans.push_back(make_pair(-pp,ll));
    }

    sort(ans.begin(),ans.end());
    bool check=true;
    for(int i=0; i<3; i++) {
        auto anss=ans[i];
        if (anss.first!=0  ) {
            cout<<anss.second<<" "<<-anss.first<<endl;
            check=false;
        }      
    }
        if (check){
            cout<<"No Sales";
        }
}