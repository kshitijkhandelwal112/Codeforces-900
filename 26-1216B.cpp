#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(a);
    vector<int> pos(n);
    vector<bool> done(n);
    sort(a.begin(),a.end(),greater<int>());
    int shots=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && done[j]==false){pos[i]=j+1;done[j]=true;break;}// I missed this break statement that's why it did errors.
        }
        shots += a[i]*i + 1;
    }
    cout<<shots<<"\n";
    for(int i=0;i<n;i++) cout<<pos[i]<<" ";
    cout<<"\n";
    return 0;
}
/* BEST METHOD TOLD BY AI, using: vector<pair<int,int>> a(n);
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<std::pair<int,int>> a(n); // {durability, original index (1-based)}
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].first;
        a[i].second = i + 1;
    }

    std::sort(a.begin(), a.end(), std::greater<>());

    long long shots = 0; // safe habit even though int suffices here
    std::vector<int> order(n);
    for (int i = 0; i < n; i++) {
        shots += (long long)a[i].first * i + 1;
        order[i] = a[i].second;
    }

    std::cout << shots << "\n";
    for (int i = 0; i < n; i++) std::cout << order[i] << " ";
    std::cout << "\n";
    return 0;
}
*/