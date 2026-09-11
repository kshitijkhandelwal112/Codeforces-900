#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,l,r; cin>>n>>l>>r;
    // for minimum sum = check l, accordingly have all smaller numbers only, with maximum 1's.
    // for maximum sum = check r, accordingly have GP, with every number greater than previous number
    int max1= (pow(2,r)-1);
    int max2= ((n-r)*pow(2,r-1));
    int max=max1+max2;
    int min1= (n-l+1);
    int min2=2*(pow(2,l-1)-1);
    int min=min1+min2;
    cout<<min<<" "<<max<<"\n";
    return 0;
}// AI told that pow(x,y) function returns float values, so it would be not that good for larger values or sth like that.