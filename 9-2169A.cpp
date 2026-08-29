#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,a; cin>>n>>a;
        vector<int> v(n); for(int i=0;i<n;i++)cin>>v[i];
        int big=0, small=0;
        for(int i=0;i<n;i++){
            if(v[i]>a)big++;
            else if(v[i]<a)small++;
        }
        if(big>small) cout<<a+1<<"\n"; // because any number greater than a would be nearer to all greater numbers.
        else if(small>big) cout<<a-1<<"\n"; // because any number lesser than a would be nearer to all lesser numbers.
        else cout<<a+1<<"\n"; // Done this because this time any number won't make score >0.
        // Idk why but in above line, any number should work rather than a+1 because all numbers would give the same thing that a would get point.
        // But codeforces test 5 accepted a+1 only.
    }
    return 0;
}
/* BEST CODE BY CLAUDE
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        int cnt = 0; // cnt > 0 means more "big" marbles, cnt < 0 means more "small"
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cnt += (x > a) - (x < a);
        }
        cout << (cnt < 0 ? a - 1 : a + 1) << "\n";
    }
    return 0;
}
*/