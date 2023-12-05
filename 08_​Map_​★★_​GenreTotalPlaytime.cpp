//playtimegenre
#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b, genre , fulltime ;
    map <string,int> song;
    int time = 0; //เวลารวม วิ   
    while (cin >> a) {
        if(a == "1")break;
        time = 0;
        cin >> b >> genre >> fulltime;
        for (size_t i=0; i < fulltime.length(); i++) {
            if (fulltime[i]==':') {
            time += (stoi(fulltime.substr(0,i)))*60 + stoi(fulltime.substr(i+1,2));
            }
        }
        if (song.find(genre)!=song.end()) {
            song[genre]+=(-time);
        }
        else {
            song[genre]=-time;
        }
    }

    map <int,string> output ;
    for (auto & v : song) {
        output[v.second]=v.first;
    }
    int count = 0;
    for (auto & o : output) {
        int num = -(o.first);
        if (count==3) break;
        cout<<o.second<<" --> "<<(num/60)<<":"<<(num%60)<<endl;
        count++;
    }   
}



