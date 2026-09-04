#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; cin>>s;
        int n=s.length();
        vector<int> d(n-1); // This was a hint taken from tutorial of the problem.
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                d[i]++;
            }
        }
        int one=0;
        for(int i=0;i<n-1;i++){
            if(d[i]==1) one++;
        }
        if(one>2) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY CLAUDE
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = (int)s.size();

        int bad = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) bad++;
        }

        cout << (bad > 2 ? "NO" : "YES") << "\n";
    }
    return 0;
}
*/