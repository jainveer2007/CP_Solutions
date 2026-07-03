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

            if(v[i] == 1) {
                v[i]++;
            }
        }

        for(int i=1; i<n; i++) {

            if(v[i] % v[i-1] == 0) {
                v[i]++;
            }
        }

        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}