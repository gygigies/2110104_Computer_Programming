#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set <string> win; set <string> lose;
    string x; string y;
    while (cin>>x>>y){
        win.insert(x);
        lose.insert(y);
    }
    auto itr = win.begin();
    while(itr!=win.end()){
        if(lose.find(*itr)!=lose.end()){
            itr = win.erase(itr);
        }else ++itr;
    }
    if(win.empty()){
        cout << "None";
    }else{
        for(auto e : win){
            cout << e << ' ';
        }
    }

}
