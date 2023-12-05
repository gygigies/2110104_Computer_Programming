#include <iostream>
using namespace std;

int main() {
 int h1,m1,s1, h2,m2,s2;
 cin >> h1 >> m1 >> s1;
 cin >> h2 >> m2 >> s2;
 int t1 = h1*60*60 + m1*60 + s1;
 int t2 = h2*60*60 + m2*60 + s2;
 cout<<t1<<endl<<t2<<endl;
 int dh,dm,ds;
 ds = ((t2 - t1)+(24*60*60))%(24*60*60); //fix
 cout<<ds<<endl;
 dh = ds / (60*60);
 cout<<dh<<endl;
 ds -= dh * 60*60;
 cout<<ds<<endl;
 dm = ds / 60;
 cout<<dm<<endl;
 ds -= dm*60;
 cout<<ds<<endl;
 cout << dh << ':' << dm << ':' << ds;

 
}
