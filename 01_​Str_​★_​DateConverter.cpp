#include <iostream>
#include <string>

using namespace std;
int main() 
{   string d ;
    cin >> d;
    
    string a,b,c ;

    a= d.substr(0,2); //day
    b= d.substr(3,2); //month
    c= d.substr(6,4); //year

    int j;
    j = stoi(b);

    string z = "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";



    string y =z.substr(((j-1)*3),3);
     

    cout << y<<" "; 
    int a1 = stoi(a);
    cout << a1<<", ";
    int e = stoi(c)-543;
    cout<<e;
}