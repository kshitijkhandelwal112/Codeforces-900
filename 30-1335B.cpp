#include <iostream>
#include <string>
#include <vector>
using namespace std;
// I couldn't solve this one, and hence saw solution to learn.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b; cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            cout<< char('a'+i%b); // This was a very smart approach.
        }
        // I was thinking like say a = 7 and b=3, then I would write abccccc but this would do problems.
        // But they've written: abcabca. This doesn't cause any issue for any substring.
        //
    }
    return 0;
}