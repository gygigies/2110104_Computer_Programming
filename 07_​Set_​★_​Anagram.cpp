#include <bits/stdc++.h>
using namespace std;
int main() {
    string x; string y;
    getline(cin,x); getline(cin,y);
    multiset<char> one; multiset<char> two;

    char z;
    for (int i = 0; i<x.length(); i++) {
        if((x[i]!=' ')) {
            if (x[i]>='A' && x[i]<='Z') {
                z=x[i]+32;
            }
            else {
                z=x[i];
            }
            one.insert(z);
        }
    }
    for (int i = 0; i<y.length(); i++) {
        if((y[i]!=' ')) {
            if (y[i]>='A' && y[i]<='Z') {
                z=y[i]+32;
            }
            else {
                z=y[i];
            }
            two.insert(z);
        }
    }
    // auto itr = one.begin();
    // while (itr != one.end()) {
    //     cout << *itr << ' ';
    //     ++itr;
    // }
    // cout << '\n';
    // auto itr1 = two.begin();
    // while (itr1 != two.end()) {
    //     cout << *itr1 << ' ';
    //     ++itr1;
    // }

    if (one==two) {
        cout << "YES";
    }else{
        cout << "NO";
    }
}