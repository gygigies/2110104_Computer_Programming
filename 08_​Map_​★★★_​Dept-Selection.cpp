#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string f; int nom; 
    map <string,int> field;
    for (int i=0; i<n; i++) {
        cin>>f>>nom;
        field[f]=nom;
    }
    int m ; cin >> m;
    long long int studentnum; double score; string want;
    vector <string> wantfour;
    pair <double,long long int> codescore;
    map <pair<double,long long int>,vector<string>> all;
    
    for (int i=0 ; i<m; i++) {
        cin>>studentnum>>score;
        codescore = make_pair(-score,studentnum);
        
        for (int i=0; i<4; i++) {
            cin>>want;
            wantfour.push_back(want);  
        }
        all [codescore] = wantfour; 
        wantfour.clear();
    }
    map <long long int , string> output;
    for (auto & o : all ) {
        for (auto p : o.second ) {
            string f = p ;
            if (output.find((o.first).second)!=output.end()) {
                break;
            }
            for (auto & y : field) {
                if (f==y.first && y.second>0) {
                    output[(o.first).second]=y.first;
                    y.second-=1;
                    break; 
                }
            }
        }
    }
    for (auto & y : output ) {
        cout<<y.first<<" "<<y.second<<endl; 
    }

}