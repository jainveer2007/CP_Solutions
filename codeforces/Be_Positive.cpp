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
        L zero = 0;
        L minus = 0;

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        for(int i=0; i<n; i++) {

            if(v[i] < 0) {
                minus++;
            }
            else if(v[i] == 0) {
                zero++;
            }
        }

        if(minus == 0) {
            cout<<zero<<endl;
        }
        else if(minus%2 != 0) {
            int ans = 2 + zero;
            cout<<ans<<endl;
        }
        else {
            cout<<zero<<endl;
        }
    }

    return 0;   
}