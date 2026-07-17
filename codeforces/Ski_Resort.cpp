#include<bits/stdc++.h>
using namespace std;
#define L long long 

const L MOD = 1e9+7;

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,k,q;
        cin>>n>>k>>q;

        vector<L> v(n);
        L count = 0;
        L len = 0;

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        for(int i=0; i<n; i++) {

            if(v[i] <= q) {
                len++;

                if(len >= k) {
                    count = count + (len - k + 1);
                }
            }
            else {
                len = 0;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}