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

        sort(v.begin(), v.end());

        bool found = true;

        if(n == 1) {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0; i<n-1; i++) {

            if(v[i] == v[i+1]) {
                cout<<"NO"<<endl;
                found = false;
                break;
            }
        }

        if(found == true) {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}