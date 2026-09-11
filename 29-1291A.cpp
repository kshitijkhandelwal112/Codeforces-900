#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        bool done=false;
        if(n==1)cout<<-1<<"\n";
        else{
            for(int i=0;i<n && done==false;i++){
                if((s[i]-'0')%2!=0){
                    for(int j=i+1;j<n; j++){ // Mistake: order of s[i] and s[j] had to be same as original string, so j=i+1 has to be the initialization of j.
                        if((s[j]-'0')%2!=0){
                            cout<<s[i]<<s[j]<<"\n";
                            done=true;
                            break; // Mistake: Missed this break;
                        }
                    }
                }
            }
            if(done==false){
                cout<<-1<<"\n"; // S.M. if one odd two even digits=> sum will still be odd.
            }
        }
    }
    return 0;
}
/* BEST SOLUTION BY CLAUDE
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::string s;
        std::cin >> n >> s;

        int first = -1, second = -1;
        for (int i = 0; i < n; ++i) {
            if ((s[i] - '0') % 2 != 0) {
                if (first == -1) first = i;
                else { second = i; break; }
            }
        }

        if (second != -1) std::cout << s[first] << s[second] << "\n";
        else std::cout << -1 << "\n";
    }
    return 0;
}
*/