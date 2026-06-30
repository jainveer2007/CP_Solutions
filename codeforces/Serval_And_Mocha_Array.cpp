#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        vector<L> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        int flag=0;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(__gcd(a[i],a[j])<=2) flag=1;
            }
        }

        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}