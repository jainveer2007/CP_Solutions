#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,x,y,z;
        cin>>n>>x>>y>>z;

        L ai;

        if(n <= x*z) {
            ai = (n + x - 1) / x;
        }
        else {
            ai = z + (n - x*z + x + 10*y - 1) / (x + 10*y);
        }

        L noai = (n + x + y - 1) / (x + y);
        L ans = min(ai, noai);

        cout<<ans<<endl;
    }

    return 0;
}