#include <iostream>
using namespace std;
// I couldn't do this problem. AI told it.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        if(n%2!=0){
            for(int i=0;i<n;i++)cout<<"7"<<" ";
            cout<<"\n";
        }
        if(n%2==0){
            if(n>=4){
                cout<<"13 2 8 1"<<" ";
                for(int i=4;i<n;i++){
                    cout<<"6 ";
                }cout<<"\n";
            }
            else if(n==2){
                cout<<1<<" "<<3<<"\n";
            }
        }
    }
    return 0;
}