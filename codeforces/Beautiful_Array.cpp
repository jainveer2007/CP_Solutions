#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n, k, b, s;
        cin>>n>>k>>b>>s;

        L minimum_s = (k * b);
        L maximum_s = (k * b) + (k - 1) * n;

        if(s < minimum_s || s > maximum_s) {

            cout<<-1<<endl;

        }
        else {

            vector<L> ans(n, 0);
            ans[0] = minimum_s;
            s -= minimum_s;

            for(L i = 0; i < n; i++) {

                L add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }

            for(L i = 0; i < n; i++)
                cout<<ans[i]<<" ";
                cout<<endl;
        }
    }

    return 0;
}