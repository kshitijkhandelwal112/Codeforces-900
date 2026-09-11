#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int x=(n/2)+(n%2);
    long long int sum1=0,sum2=0; // Mistake: didn't use long long, and sum1*sum1 would be of order 10^9 for large numbers.
    for(int i=0;i<x;i++)sum1+=a[i];
    for(int i=x;i<n;i++)sum2+=a[i];
    cout<<(sum1*sum1)+(sum2*sum2)<<"\n";
    return 0;
}