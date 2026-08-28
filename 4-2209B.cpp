#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); // Forgot this line...
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            int jL=0,jR=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]) jR++;
                else if(a[j]<a[i]) jL++;
            }
            cout<<(jR>jL ? jR:jL)<<" ";
            // Basically I used distance concept in absolute value (mod) function.
        }
        cout<<"\n";
    }
    return 0;
}