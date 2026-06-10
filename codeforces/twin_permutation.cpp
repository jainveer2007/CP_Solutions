#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L arr[n];
        
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++) {

            int ans = n + 1 - arr[i];
            cout<<ans<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}