#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        if(n<k) cout<<k-n<<"\n";
        else if((n-k)%2==0) cout<<0<<"\n";
        else cout<<1<<"\n"; // Mistake: Left this edge case.
    }
    return 0;
}