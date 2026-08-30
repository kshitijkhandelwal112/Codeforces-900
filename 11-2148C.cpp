#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,m; cin>>n>>m;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i]>>b[i];
        int points=0;
        int pos=0;
        for(int i=0;i<n;i++){
            int dt=(i==0 ? a[0] : a[i]-a[i-1]);
            if(dt%2==0 && b[i]!=pos){points+=dt-1;pos=b[i];}
            else if(dt%2!=0 && b[i]!=pos){points+=dt;pos=b[i];}
            else if(dt%2==0 && b[i]==pos){points+=dt;}
            else if(dt%2!=0 && b[i]==pos){points+=dt-1;}
        }
        points+=(m-a[n-1]);
        cout<<points<<"\n";
    }
    return 0;
}
/* BEST VERSION BY CLAUDE
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        long long points = 0;
        int prevA = 0, pos = 0; // start: minute 0, side 0

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            int dt = a - prevA;

            int neededParity = (pos != b) ? 1 : 0; // do we need an odd # of switches?
            points += dt - ((dt % 2 == neededParity) ? 0 : 1);

            pos = b;
            prevA = a;
        }

        points += (m - prevA); // free movement after the last requirement
        cout << points << "\n";
    }
    return 0;
}
*/