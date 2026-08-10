#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,k;
        cin>>n>>k;

        L ans=0;
        L p=1;

        while(n>=k*p) {

            n-=k*p;
            ans+=k;
            p*=2;
        }

        ans+=n/p;
        cout<<ans<<endl;
    }

    return 0;
}