//partylist
#include <bits/stdc++.h>
using namespace std;
int main() {
    string name; long long score;
    vector < pair < string , long long > > input ; 
    long long total = 0 ;

    while (cin >> name) {
        if ( name == "END" ) break;
        cin >> score;
        input.push_back(make_pair( name , score ));
        total += score ;
    }
    double totalavg = double(total) / 100.0 ;

    map < string , int > member ;
    map < double , string > reminder ;

    int totalmem = 0 ;
    for (auto &v : input) {
        double avg = double(v.second) / totalavg ;
        int nummember = int(avg)/1 ;
        totalmem += nummember ; 
        member[v.first] = nummember ;
        reminder [-(avg - nummember)] = v.first ;
    }
    
    int adder = 0 ;
    if ( totalmem != 100 ) {
        adder = 100 - totalmem;
    }

    int count = 0;
    for (auto itr = reminder.begin(), end=reminder.end(); itr!=end && count<adder; itr++ , count++) {
        //find แล้วใช้ค่า
        int stop = -1; 
        for (int i =0 ; i<input.size(); i++) {
            if (input[i].first == (*itr).second) {
                stop = i;
                break;
            }
        }
        if (stop != -1) {
            member [input[stop].first] += 1 ;
        }  
    }
    multimap < int , string > memberlast ;
    for (auto &y : member) {
        memberlast.insert(make_pair(y.second , y.first ));
    }
    vector < pair < pair < int , long long > , string > > answer ;
    for (auto &m : memberlast ) {
        int stop = -1; 
        for (int i =0 ; i<input.size(); i++) {
            if (input[i].first == m.second) {
                stop = i;
                break;
            }
        }
        if (stop != -1) {
            answer.push_back(make_pair( make_pair( -input[stop].second , m.first) , m.second ));
        } 
    }
    sort (answer.begin() , answer.end()); 
    for (auto &y : answer) {
        if (y.first.second == 0) continue;
        cout << y.second << " " << y.first.second << " " << -y.first.first<< endl ;
    }
}

