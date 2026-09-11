#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int z=a[n-2];
        if(z-2>=0 && (n-2)>=(z-1))cout<<z-1<<"\n";
        else if(z-2>=0 && (n-2)<(z-1)) cout<<n-2<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}
/* CLAUDE RECOMMENDED USING THIS INSTEAD OF SORTING, TO REDUCE TIME COMPLEXITY:
        int max1 = 0, max2 = 0; // max1 >= max2: the two largest plank lengths
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            if (x > max1) {
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max2 = x;
            }
        }
*/