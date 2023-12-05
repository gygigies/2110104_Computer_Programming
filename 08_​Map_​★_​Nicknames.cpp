#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int n; cin>>n; cin.ignore();
    map<string,string> nickname1;
    map<string,string> nickname2;
    string first; string nick;
    for (int i=0; i<n; i++) {
        cin>>first>>nick;
        nickname1[first]=nick;
        //nickname2[nick]=first;
        nickname1[nick]=first;
    }
    
    int m; cin>>m; cin.ignore(); string input;
    for (int i=0; i<m; i++) {
             cin>>input;
             if (nickname1.find(input)!=nickname1.end()){
                cout<<nickname1[input];
             }
             else {
            cout<<"Not found"<<endl;
        }
             
             

    // for (int i=0; i<m; i++) {
    //     cin>>input;
    //     auto itr = nickname1.find(input);
    //     auto itr1 = nickname2.find(input);
    //     if (itr!=nickname1.end()) {
    //         cout<<(*itr).second<<endl;
    //     }
    
    //     else if (itr1!=nickname2.end()) {
    //         cout<<(*itr1).second<<endl;
    //     }
    //     else {
    //         cout<<"Not found"<<endl;
    //     }

    // }

    

}
}