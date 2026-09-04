#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int good=0;
        int good0=0, good1=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[n-i]){
                good++;
                if(s[i]=='0') good0++;
                else good1++;
            }
        }
        if(good==k)cout<<"Yes\n";
        else if(good<k){
            if((n/2 - good)>(k-good)) cout<<"Yes\n";
            else if((n/2 - good)==(k-good)){
                if((k-good)%2==0) cout<<"Yes\n";
                else cout<<"No\n";
            }
        }
        else if(good>k){
            if((good-k)%2 == 0 && (good-k)/2 == good1) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}