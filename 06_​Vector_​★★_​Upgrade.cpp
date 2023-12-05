#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector <pair<string,string>> grades;
    string sid,grade;
    while (true) {
        cin>>sid;
        if (sid=="q") {break;}
        cin>>grade;
        grades.push_back(make_pair(sid,grade));}
        cin.ignore(); string sidp; getline(cin,sidp);
        vector <string> sidplus;
        for (int i=0; i<sidp.length(); i++) {
            if (sidp[i]==' ') {
                sidplus.push_back(sidp.substr(i-5,5));}
            if(i==sidp.length()-1) sidplus.push_back(sidp.substr(i-4,5));}
        vector <string> origrades={"F","D","D+","C","C+","B","B+","A"};
        vector <pair<string,string>> gradesans(grades);

        for (int l=0; l<gradesans.size(); l++) { 
            auto f= gradesans[l];
            auto ll=f.first; auto lll=f.second;
            for (int i=0; i<sidplus.size(); i++) {
                if (ll==sidplus[i]) { 
                    for (int k=0; k<origrades.size(); k++) {
                        if (origrades[k]==lll && lll!="A") {
                                gradesans[l]=(make_pair(ll,origrades[k+1]));
                                break;}}}}            
            }
        for(int i=0; i<gradesans.size(); i++) {
        auto anss=gradesans[i];
            cout<<anss.first<<" "<<anss.second<<endl;
        }
}

