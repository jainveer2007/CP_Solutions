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

        sort(v.begin(), v.end(), greater<L>());

        
    }

    return 0;
}