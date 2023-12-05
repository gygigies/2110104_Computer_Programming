//queueticket
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n; double q; string a; //instruction
    vector <double> timestart ; 
    vector <int> queue ; 
    int ticket; int call = 0;
    double total=0; double count=0;
    while (n--) {
        cin>>a;
        if (a == "reset") {
            cin>>ticket;
        }
        if (a == "new") {
            cin>>q;
            queue.push_back(ticket);
            timestart.push_back(q);
            cout<< ">> ticket " << ticket <<endl;
            ticket++;
        }
        if (a =="next") {
            cout<< ">> call " << queue[call] <<endl;
            call++;
        }
        if (a=="order") {
            cin>>q;
            cout<< ">> qtime " << queue[call-1] <<" ";
            total+=((q)-timestart[call-1]);
            cout<<q-timestart[call-1]<<endl;
            count++;
        }
        if (a== "avg_qtime") {
            cout<<">> avg_qtime "<< total/count<<endl;
        }
    }
}






