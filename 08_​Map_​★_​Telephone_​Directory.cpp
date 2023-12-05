#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int n; cin>>n; 
    map <string,string> n1;
    map <string,string> n2;
    string first; string last; string name; string tel;
    for (int i=0; i<n; i++) {
        cin>>first>>last;
        name=first+" "+last;
        cin>>tel;
        n1[name]=tel;
        n2[tel]=name;
    }
    int m; cin>>m; string input;
    cin.ignore();
    for (int i=0; i<m; i++) {
        getline(cin,input);
        auto itr1=n1.find(input);
        auto itr2=n2.find(input);
        if (itr1!=n1.end()) {
            cout<<input<<" --> "<<(*itr1).second<<endl;
        }
         else if (itr2!=n2.end()) {
            cout<<input<<" --> "<<(*itr2).second<<endl;
        }
        else {
            cout<<input<<" --> ""Not found"<<endl;
        }
    }
}