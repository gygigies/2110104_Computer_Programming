//unionintersectdiff
#include <bits/stdc++.h>
using namespace std;

set<int> Union(set<int> &A, set<int> &B) {
    for (auto& b : B) {
        A.insert(b);
    }
    return A;
}
set<int> Intersection(set<int> &A, set<int> &B) {
    set<int> result;
    for (auto& a : A) {
        if (B.find(a) != B.end()) {
            result.insert(a);
        }
    }
    return result;
}
set<int> Difference(set<int> &A, set<int> &B) {
    for (auto& b : B) {
        if (A.find(b) != A.end()) {
            A.erase(b);
        }
    }
    return A;
}
int main() {
    set<int> A, U, I, D;
    //isstringstream
    string str;
    getline(cin,str);
    istringstream iss(str);
    int num;
    while (iss >> num) {
        A.insert(num);
    }
    U = A; I = A; D = A;
    while (getline(cin, str)) {
        set<int> B;
        if(str == "-1")break;
        istringstream iss2(str);
        int num;
        while (iss2 >> num) {
            B.insert(num);
        }
        U = Union(U, B);
        I = Intersection(I, B);
        D = Difference(D, B);
    }
    //union
    cout<<"U:";
    for (auto i : U ) {
        cout<<" "<<i;
    }
    //intersect
    cout<<endl<<"I:";
    if (I.size()==0) {
        cout<<" empty set";
    }
    else {
        for (auto &i : I ) {
        cout<<" "<<i;
        }
    }
    //difference
    cout<<endl<<"D:";
    if (D.size()==0) {
        cout<<" empty set";
    }
    else {
        for (auto &i : D ) {
        cout<<" "<<i;
        }
    }
    return 0;
}


