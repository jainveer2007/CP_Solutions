#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L n,m;
    cin>>n>>m;

    L sum = n*(n+1)/2;

    m = m % sum;

    for(int i=1; i<=n; i++) {

        if(m >= i) {
            m -= i;
        }
        else {
            cout<<m<<endl;
            return 0;
        }
    }

    cout<<0<<endl;

    return 0;
}