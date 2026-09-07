#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n; cin>>n;
        bool found=false;
        int dig=0;
        for(int i=(int)n.size()-1;i>=0;i--){
            if(n[i]=='0' && found==false){
                dig++;
            }else if(n[i]!='0' && found==false){
                found=true;
            }else if(n[i]!='0' && found==true) dig++;
        }
        cout<<dig<<"\n";
    }
    return 0;
}
/* BEST SOLUTION BY CLAUDE
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        int p = n.find_last_not_of('0');   // index of last nonzero digit (always exists)
        int trailing = (int)n.size() - 1 - p;
        int nonzero_before = 0;
        for (int i = 0; i < p; i++) if (n[i] != '0') nonzero_before++;
        cout << trailing + nonzero_before << "\n";
    }
    return 0;
}
*/