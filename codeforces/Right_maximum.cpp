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

        for(int i = 0; i < n; i++) {
            cin>>v[i];
        }

        int count = 0;
        L mx = 0;

        for(int i=0; i < n; i++) {

            if(v[i] > mx) {
                mx = v[i];
                count++;
            }
            else if(v[i] == mx) {
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}