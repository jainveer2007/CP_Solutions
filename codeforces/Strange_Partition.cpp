#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,x;
        cin>>n>>x;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        L maxsum = 0;
        L minsum = 0;

        for(int i=0; i<n; i++) {

            minsum = minsum + v[i];
            maxsum = maxsum + (v[i] + x - 1)/x;
        }

        minsum = (minsum + x - 1)/x;
        cout<<minsum<<" "<<maxsum<<endl;
    }

    return 0;
}