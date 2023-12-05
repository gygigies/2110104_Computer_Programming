#include <iostream>
using namespace std;
int main() {
    string hay,needle;
    int b=0;
    int x=0;
    getline(cin,needle); getline(cin,hay); 
    int pos;
    bool found = false;
    while (b<hay.length()) {
        int i=0;
        bool match = true;
        while ( i < needle.length() && i<hay.length()) {
            if (needle[i]!=hay[b+i]) {
                match = false;
        }
        i++;
        }
        if (match  && i==needle.length()) { 
            found = true ;
            pos = b;
            x++;
        }
        b++;
    }
    if (found) {
        cout<<x<<endl;
        
    }

}