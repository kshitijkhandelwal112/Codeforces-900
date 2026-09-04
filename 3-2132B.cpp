#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
long long int exp(int x){
    long long int z=1;
    for(int i=0;i<x;i++) z*=10;
    // pow(10,2) may give answer 99.9999999 instead of 100, and int z = pow(10,x) may give z=99.
    // Therefore we use the round function.
    return z;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long int n; cin>>n;
        bool done=false;
        // vector<int> x; THIS WAS A GREAT MISTAKE WHICH I COULD NEVER THINK OF.
        vector<long long int>x;
        for(int z=1;done==false;z++){
            long long int d=exp(z)+1; // Silly mistake: Missed this long long.
            if(n%d==0) x.push_back(n/d);
            if(d>n)done=true;
        }
        sort(x.begin(),x.end());
        cout<<x.size()<<"\n";
        if(x.size()!=0){    
            for(int i=0;i<(int)x.size();i++) cout<<x[i]<<" "; // Wrote (int)x.size() for unsigned to signed conversion.
            cout<<"\n";
        }
    }
    return 0;
}