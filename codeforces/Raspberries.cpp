#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,k;
        cin>>n>>k;

        vector<L> v(n);

        for(L i=0; i<n; i++) {
            cin>>v[i];
        }

        L count = LLONG_MAX;
        L even = 0;

        for(L i=0; i<n; i++) {

            if(v[i] % 2 == 0) {
                even++;
            }

            L operations = (k - (v[i] % k)) % k;
            count = min(count, operations);
        }

        if(k == 4) {

            if(even >= 2) {
                count = min(count, 0LL);
            }

            else if(even == 1) {
                count = min(count, 1LL);
            }

            else {
                count = min(count, 2LL);
            }
        }

        cout<<count<<endl;
    }

    return 0;
}