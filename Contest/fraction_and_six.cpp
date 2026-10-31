#include<bits/stdc++.h>
using namespace std;
#define L long long 

L main() {

    L t;
    cin>>t;

    while(t--) {

        L n,m;
        cin>>n>>m;

        string p,q;
        cin>>p>>q;

        for(int i=0; i<m; i++) {

            bool found = false;

            for(int j=0; j<n; j++) {

                if(p[j] == q[i]) {
                    p[j] = '#';
                    found = true;
                    break;
                }
            }

            if(!found) {
                break;
            }
        }

        string ans = "";

        for(int i=0; i<n; i++) {
            if(p[i] != '#') {
                ans += p[i];
            }
        }

        if(ans == "six") {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}