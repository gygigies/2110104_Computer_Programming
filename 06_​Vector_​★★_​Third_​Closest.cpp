#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n; cin>>n;
    vector <pair<double,double>> v(n);
    vector <double> d(n);
    for (int i=0; i<n; i++) {
        cin>>v[i].first>>v[i].second;
        d[i]=sqrt(pow(v[i].first,2)+pow(v[i].second,2));
    }
    vector <double> ds(d);
    sort(ds.begin(),ds.end());

    for (int i=0; i<n; i++) {
        if (d[i]==ds[2]) {
            cout<<"#"<<i+1<<": ("<<v[i].first<<", "<<v[i].second<<")";
            break;
        }
    }


}
