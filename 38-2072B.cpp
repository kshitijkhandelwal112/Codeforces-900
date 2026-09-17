#include <bits/stdc++.h>
// Tutorial was required to see to solve this.
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        long long int h=0,u=0;// One more mistake: long long was not done, and it caused wrong ans in test 3.
        for(int i=0;i<n;i++){
            if(s[i]=='_')u++;
            else h++;
        }
        if(u<1 || h<2) cout<<0<<endl;
        else{
            //I began to think that the optimal arrangement may be kind of: ------________- or -_-_-_-____-
            // I also (for once) thought that it would be the best if some hyphens are in beginning and some at the end and rest underscores in between.
            // But I couldn't think how to do this, and thought this is a bad idea and left it. But it was actually answer;
            // Half of the hyphens on left, other half on right, if h is odd, no issue, one extra on one side. 
            
            // Left side hyphens = Floor fn. of (h/2) and right side = its ceiling fn.
            // Answer = simply- floor(h/2) C 1 * u C 1 * ceiling(h/2) C 1
            long long int z = h/2;
            long long int y = z*u*(h-z); // Missing long long also caused issues.
            cout<<y<<endl;
        }
    }
    return 0;
}