//คู่ข้อมูลรวมกันได้k
#include <bits/stdc++.h>
using namespace std;
int main() {
    int k; cin>>k;
    set <int> answer; 
    int number;
    while (cin >> number) {
        if (number == -1) break;
        if (number > k) {
            continue;
        }
        else {
            answer.insert(number);
        }
    }
    int count = 0;
    for (auto i : answer) {
        if (k-i > 0 && answer.find(k-i) != answer.end() ) {
            count++; 
        }
    }
    cout<<int(count/2);
}


