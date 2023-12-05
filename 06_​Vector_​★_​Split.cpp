#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector <string> keep;
    string temp ="";
    for (int i=0; i<line.size(); i++) {
        if(line[i]==delimiter && line[i-1]!=delimiter && temp!="") {
            keep.push_back(temp);
            temp="";
        }
        else if (line[i]!=delimiter) {
            temp+=line[i];
        }
        if (i==line.size()-1 && temp!="") {
            keep.push_back(temp);
        }
    }
    return keep;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}
