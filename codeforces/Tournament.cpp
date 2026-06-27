#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,j,k;
        cin>>n>>j>>k;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        L maxi = *max_element(v.begin(), v.end());

        if(k > 1) {
            cout<<"YES"<<endl;
        }
        else {
            if(v[j - 1] == maxi) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}