#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n,q;
        cin>>n>>q;

        vector<L> v(n);
        vector<L> prefix(n+1,0);

        for(int i=0; i<n; i++) {
            cin>>v[i];
            prefix[i+1] = prefix[i] + v[i];
        }

        L totalSum = prefix[n];
        L l,r,k;

        for(int i=0; i<q; i++) {

            cin>>l>>r>>k;

            L rangeSum = prefix[r] - prefix[l-1];
            L length = r - l + 1;
            L newSum = totalSum - rangeSum + (length*k);

            if(newSum%2 == 0) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}