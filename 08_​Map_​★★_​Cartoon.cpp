//cartoonchar
#include <bits/stdc++.h>
using namespace std;
int main() {
    string name; string kind;
    map <string,string> input;
    vector <string> allkind;
    
    while (cin>>name>>kind){
        if (name == "1") {break;}
        if (input.find(kind) != input.end()) {
            input[kind] += " "+ name; //เก็บเป็นstring
        }else {
            input[kind] = name; //สร้างใหม่
        }
        if (find(allkind.begin(),allkind.end(),kind) == allkind.end()) {
            allkind.push_back(kind); //ประเภทใหม่
        }
    }
    for (auto v : allkind) {
        cout<< v <<":";
        for (auto & y : input) {
            if (y.first==v) {
            cout<<" "<<y.second;
            }
        }
        cout<<endl;
    }
}      


        
      