#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string r; cin>>r;
        int n = r.size();
        int ops=0;
        if(r[n-1]=='u'){ops++;r[n-1]='s';}
        if(r[0]=='u'){ops++;r[0]='s';}
        for(int i=0;i<n-1;i++){
            if(r[i]=='u' && r[i+1]=='u'){r[i+1]='s';ops++;i++;}
        }
        cout<<ops<<"\n";
    }
    return 0;
}