#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L k;
        cin>>k;

        L cnt = 0;
        bool ok = false;

        for(L i=0; i<k; i++) {

            L x;
            cin>>x;

            if(x > 2) {
                ok = true;
            }

            if(x == 2) {
                cnt++;
            }
        }

        if(ok || cnt > 1) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

}