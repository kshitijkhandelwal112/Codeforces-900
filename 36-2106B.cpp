#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,x; cin>>n>>x;
        if(n==1) cout<<0<<"\n"; // Delayed to realize this- instead of adjusting n==1 with generaized cases, this case could be dealt separately.
        else if(x==0){
            for(int i=1;i<n;i++) cout<<i<<" ";
            cout<<0<<"\n";
        }
        else if(x<n-1){
            for(int i=0;i<x;i++) cout<<i<<" ";
            for(int i=x+1;i<n;i++) cout<<i<<" ";
            cout<<x<<"\n";
        }else if(x==n-1 || x==n){ // Silly mistake- I left these cases, and hence it gave wrong answer.
            for(int i=0;i<n;i++) cout<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
/* BEST SOLUTION GIVEN BY CLAUDE
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (x == n) {
            for (int i = 0; i < n; i++) cout << i << " \n"[i == n - 1];
        } else {
            for (int i = 0; i < x; i++) cout << i << ' ';
            for (int i = x + 1; i < n; i++) cout << i << ' ';
            cout << x << '\n';
        }
    }
    return 0;
}
*/