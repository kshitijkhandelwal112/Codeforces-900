#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(n);
        for(int i=0;i<n;i++) b[i]=abs(a[i]);
        sort(b.begin(),b.end());
        int idx = (find(b.begin(),b.end(),abs(a[0]))) - b.begin();
        int m = (n/2)+(n%2);
        if(idx<m) cout<<"YES\n";
        else if((n-idx)>=idx) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY CLAUDE
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a1; cin >> a1;
        int target = abs(a1);

        int cntLess = 0;
        for (int i = 1; i < n; i++) {
            int x; cin >> x;
            if (abs(x) < target) cntLess++;
        }

        cout << (cntLess <= n / 2 ? "YES\n" : "NO\n");
    }
    return 0;
}
*/