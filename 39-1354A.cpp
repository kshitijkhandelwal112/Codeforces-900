#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long int a,b,c,d; cin>>a>>b>>c>>d; // Since datas were long, better to take long long, forgot initially
        if(b>=a) cout<<b<<"\n";
            // b = first alarm
            // If sleep < a when alarm: alarm for next c minutes, (c-d) minutes slept in this cycle.
            // if (c-d) is -ve or 0, then -1 as no more sleep possible.
        else if(c-d<=0) cout<<-1<<"\n"; // Silly mistake: wrote c-d<0 only, and forgot about case of c-d=0
        else{
            long long int time=b;
            long long int w = (a-b)%(c-d);
            int g = (w==0 ? 0:1);
            time+=(c*((a-b)/(c-d)+g)); // Before I used loop instead of maths (repeated addition instead of multiplication)
            // I used this variable g for ceiling function.
            // But better way to write ceiling function of (a/b) is: (a+b-1)/b; as told by claude.
            // This is because, say a = kb+c (so ceiling fn of a/b is k+1), then a+b-1 becomes (k+1)b+(c-1), and as c<b, so of course c-1<b.
            // Thus dividing (a+b-1) by b gives k+1.
            cout<<time<<"\n";
        }
    }
    return 0;
}
