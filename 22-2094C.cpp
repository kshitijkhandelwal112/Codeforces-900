#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int grid[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>grid[i][j];
        }
        vector<int> p(2*n);
        vector<int> num(2*n);
        for(int i=0;i<2*n;i++) num[i]=i+1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(p[i+j+1]==0) p[i+j+1]=grid[i][j];
            }
        }
        int z = accumulate(p.begin(),p.end(),0LL);
        int y = n*(2*n+1);
        p[0]=y-z;
        for(int i=0;i<2*n;i++)cout<<p[i]<<" ";
        cout<<"\n";
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
        vector<int> p(2 * n + 1); // 1-indexed; p[1..2n], p[0] unused

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x; cin >> x;
                if (i == 1) p[j + 1] = x;       // covers p_2 .. p_{n+1}
                else if (j == n) p[i + n] = x;   // covers p_{n+2} .. p_{2n}
            }
        }

        long long full = (long long)n * (2 * n + 1); // sum 1..2n
        long long sum = 0;
        for (int k = 2; k <= 2 * n; k++) sum += p[k];
        p[1] = full - sum;

        for (int k = 1; k <= 2 * n; k++) cout << p[k] << " \n"[k == 2 * n];
    }
    return 0;
}
*/