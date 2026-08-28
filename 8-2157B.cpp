#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,x,y; cin>>n>>x>>y;
        string str; cin>>str;
        int four=0,eight=0;
        for(int i=0;i<n;i++){
            if(str[i]=='4')four++;
            else if(str[i]=='8')eight++;
        }
        if(abs(x)<=eight && abs(y)<=eight){
            cout<<"YES\n";
        }else if(abs(x)<=n && abs(y)<=n){
            bool found=false;
            for(int i=0;i<four;i++){
                if(abs(x)==n-i && abs(y)<=n-four+i) {cout<<"YES\n";found=true;break;}
                else if(abs(y)==n-i && abs(x)<=n-four+i) {cout<<"YES\n";found=true;break;}// forgot this line.
            }
            if(found==false) cout<<"NO\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
// THIS WAS MY FIRST SOLUTION WHERE I SPENT A LOT OF TIME TO FINALLY GET ANSWER
// THOUGH MY LOGIC WASN'T DESIRED BY THE PROBLEM DEISGNER, THAT WAS RATHER MORE TYPICAL ONE
// MY SOLUTION WAS BASED ON BRUTE FORCE, BUT IT WORKS.
/* BEST SOLUTION GIVEN BY CLAUDE:
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string str;
        cin >> str;

        long long a = 0, b = 0; // a = count of '4', b = count of '8'
        for (int i = 0; i < n; i++) {
            if (str[i] == '4') a++;
            else if (str[i] == '8') b++;
        }

        long long X = abs(x), Y = abs(y);

        bool ok = (a + 2 * b >= X + Y) && (a + b >= max(X, Y));

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
*/