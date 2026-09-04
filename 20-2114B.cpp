 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;
 
 int main() {
     int t;
     cin >> t;
     while (t--) {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int one=0;
        for(int i=0;i<n;i++) one+=s[i]-'0';
        int zero = n-one;
        int nonpair = (n/2 - k);
        if(n%2==0){
            zero -= nonpair;
            one -= nonpair;
            // My main idea was: Every non-palindromic pair of bits (0 or 1), must have a 0 and a 1, so the non-palindromic part seems more secure.
            // i.e. we gotta ensure that there should be pairs of 0 and 1 in pairs that are not involved in the palindrome.
            // And if number of digits (n) is odd, then the single digit that is neither in palindromic pairs, nor in these 0-1 pairs, would simply do nothing.
            if(zero>=0 && one>=0){ // Mistake: Didn't ensure that if non-pairing numbers are greater than no. of 0's or 1's then it would be wrong...
                if(zero%2!=0) cout<<"NO\n";
                else{
                    if(zero+one==2*k) cout<<"YES\n";
                    else cout<<"NO\n";
                }
            }else cout<<"NO\n";
        }else{
            zero -= nonpair;
            one -= nonpair;
            // Instead of (zero+one)==2*k I checked (zero+one)/2 == k because the odd one number won't cause any harm, and /2 will give the GIF.
            if((zero+one)/2 == k && zero>=0 && one>=0) cout<<"YES\n";
            else cout<<"NO\n";
        }
     }
     return 0;
 }