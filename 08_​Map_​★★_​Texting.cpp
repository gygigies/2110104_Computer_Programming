//texting
#include <bits/stdc++.h>
using namespace std;
int main() {
    string x, code, text;
     map <char,string> change = { {'a',"2"},{'b',"22"},{'c',"222"},{'d',"3"},{'e',"33"},{'f',"333"},{'g',"4"},{'h',"44"},{'i',"444"},{'j',"5"},{'k',"55"},{'l',"555"},{'m',"6"},{'n',"66"},{'o',"666"},{'p',"7"},{'q',"77"},{'r',"777"},{'s',"7777"},{'t',"8"},{'u',"88"},{'v',"888"},{'w',"9"},{'x',"99"},{'y',"999"},{'z',"9999"},{' ',"0"} };
     map <string,char> reverse;
     for (auto & y : change) {
        string x= y.second; char u = y.first;
        reverse[x] = u ; }
    while (getline(cin, x)) {
        if (x == " ") break;
        code = x.substr( 0 , 3);
        text = x.substr(4 , x.length()-4);
        cout<<">> ";
        if (code == "T2K") {
            for (int i=0; i<text.length(); i++) {
                char want=text[i];
                if (want<97 && want!=32) {
                    want+=32;}
                cout<<change[want]<<" ";}
            cout<<endl; }
        if (code == "K2T"){
            string temp=""; string want;
            for (int i=0; i<text.length(); i++) {
                if (text[i]==' ' ) {
                    want = temp;
                    cout<< reverse[want];
                    temp="";}
                else {
                    temp+=text[i];}
                if (i==text.length()-1) {
                    want = temp;
                    cout<< reverse[want];}            
                want="";}
            cout<<endl; } } }