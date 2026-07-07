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

        L one = 0;
        L zero = 0;

        for(int i=0; i<n; i++) {

            if(v[i] == 0) {
                zero++;
            }
            else if(v[i] == 1) {
                one++;
            }
        }

        L ans = pow(2, zero)*one;

        cout<<ans<<endl;
    }

    return 0;
}