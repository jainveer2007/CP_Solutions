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

        L ans = 0;

        for(int i=n-2; i>=0; i--) {

            while(v[i] >=  v[i+1]) {

                ans++;
                v[i] /= 2;

                if(v[i] == 0) {
                    break;
                }
            }
            
            if(v[i] == 0 && v[i+1] == 0) {
                ans = -1;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}