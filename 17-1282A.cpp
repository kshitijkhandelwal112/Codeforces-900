#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B,c,r; cin>>A>>B>>c>>r;
        int a=(A<B ? A:B);
        int b=(A>B ? A:B);
        int d=abs(b-a);
        if(c<a){
            if(c+r>=a && c+r<=b) cout<<d-(c+r-a)<<"\n";
            else if(c+r<=a) cout<<d<<"\n";
            else cout<<0<<"\n";
        }
        else if(c>=a && c<=b){
            if(c-r>=a && c+r<=b) cout<<d-(2*r)<<"\n";
            else if(c-r<=a && c+r<=b) cout<<d-(c+r-a)<<"\n";
            else if(c-r>=a && c+r>=b) cout<<c-r-a<<"\n";
            else if(c-r<=a && c+r>=b) cout<<0<<"\n";
        }
        else if(c>=b){
            if(c-r<=b && c-r>=a) cout<<(c-r-a)<<"\n";
            else if(c-r<=a) cout<<0<<"\n";
            else cout<<d<<"\n";
        }
    }
    return 0;
}