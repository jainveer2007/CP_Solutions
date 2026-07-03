#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n;
        cin>>n;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        L distance = 0;
        L ans = 0;

        for(int i=0; i<n; i++) {
            
            distance = abs(v[i] - (i+1));
            ans = __gcd(ans, distance);
        }

        cout<<ans<<endl;
    }

    return 0;
}