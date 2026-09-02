#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool done=false;
        while(done==false){
            vector<int> b(a);
            int N = a.size();
            bool found=false;
            for(int i=0;i<N && found==false;i++){
                for(int j=i+1;j<N && found==false;j++){
                    if(a[i]<a[j]){
                        auto z=find(a.begin(),a.end(),a[j]-a[i]);
                        if(z==a.end()) {a.push_back(a[j]-a[i]);found=true;}
                    }
                }
            }
            if(a==b) done=true;
        }
        cout<<a.size()<<endl;
    }
    return 0;
}