#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        int a,b,c; cin>>a>>b>>c;
        int A = min({a,b,c});
        int B = max({a,b,c});
        // S.M. forgot edge cases where two of them or all three equal.
        if(a!=b && b!=c && c!=a) cout<<2*(B-A-2)<<endl; // S.M. forgot *2 as pairwise distance was asked. 
        else if(A==B) cout<<0<<endl;
        else if((a==b && a!=c) || (a==c && a!=b) || (c==b && a!=c)){
            if(B-A==1)cout<<0<<endl;
            else cout<<2*(B-A-2)<<endl;
        }
    }
    return 0;
}
/* BEST SOLUTION BY CLAUDE
#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int q;
    std::cin >> q;
    while (q--) {
        long long a, b, c;
        std::cin >> a >> b >> c;

        long long diff = std::max({a, b, c}) - std::min({a, b, c});
        long long ans = (diff <= 1) ? 0 : 2 * (diff - 2);

        std::cout << ans << "\n";
    }
    return 0;
}
*/