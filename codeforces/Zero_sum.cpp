#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L cnt = 0;

        for(L i=0; i<n; i++) {

            L x;
            cin>>x;

            if(x == -1) {
                cnt++;
            }
        }

        if(n % 2) {
            cout<<"NO\n";
        }
        else if(cnt % 2 == (n / 2) % 2) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}