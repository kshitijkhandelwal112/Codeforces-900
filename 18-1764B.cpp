#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        auto z = max_element(a.begin(),a.end());
        int w=a[0];
        for(int i=1;i<n;i++){
            w=gcd(w,a[i]);
        }
        int Z = (*z)/w;
        cout<<Z<<endl;
        // silly mistake: I created one y that was minimum element
        // Then I created Y = (*z)/w;
        // Then I submitted Z-Y+1, but that didn't include the differences that would be lesser than the minimum number in the array
        // But later realised that only Z has to be printed, i.e. total numbers from 1 to Z i.e. nothing but Z.
    }
    return 0;
}