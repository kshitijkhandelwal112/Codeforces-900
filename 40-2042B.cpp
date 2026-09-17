#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> c(n);
        for(int i=0;i<n;i++) cin>>c[i];
        auto z = max_element(c.begin(),c.end()); // Claude suggested that this step wasn't req as in problem it was given that 1<= c_i <= n, so directly n+1 could be written.
        vector<int> freq(((*z)+1),0); // Frequency error used to check frequency of all colours.
        for(int i=0;i<n;i++) freq[c[i]]++;
        // Basically, the colours occuring just 1 time would yield 2 points- one for choosing them, other for choosing "all of them" (as only single are there).
        // So both Alice and bob would try to maximise this type of selection.
        // Remaining ones- none of them would be able to get "all of same colour" if playing optimally, as both would try to decrease points of each other.
        // Thus 2 points corresponding to freq=1 colours, and 1 point corresponding to freq>1 colours.
        int one=0;
        int nonone=0;
        for(int i=0;i<(*z)+1;i++){
            if(freq[i]==1)one++;
            else if(freq[i]!=0) nonone++;
        }
        int alice=0,bob=0;
        if(one%2==0){alice=one/2;bob=one/2;}
        else{alice=(one/2)+1;bob=(one/2);}
        alice*=2; bob*=2;
        alice+=nonone;
        bob+=nonone;
        // AI suggested that above 5 lines could be comined in one too... 
        // alice = (one+1)/2 + nonone; bob = one/2 + nonone;
        // Bob's number of points weren't required to be answered, but I wrote to avoid any confusion.
        cout<<alice<<"\n";
    }
    return 0;
}