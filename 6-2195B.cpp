#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(n);
        for(int i=0;i<n;i++)b[i]=i+1;
        bool done=false;
        while(done==false){
            vector<int> c(a);
            for(int i=1;i<=(n/2);i++){
                int x=a[i-1],y=a[2*i-1];
                if(x>y){
                    a[i-1]=y;a[2*i-1]=x;
                }
            }
            if(a==b || a==c) done=true;
        }
        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/* BEST SOLUTION BY AI
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        // oddPart[x] = x with all factors of 2 removed
        vector<int> oddPart(n + 1);
        for (int i = 1; i <= n; i++) {
            oddPart[i] = (i % 2 == 1) ? i : oddPart[i / 2];
        }

        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (oddPart[i] != oddPart[a[i]]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
*/