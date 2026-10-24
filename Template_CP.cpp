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

        for(L i=0; i<n; i++) {
            cin>>v[i];
        }

        set<L> s;
        bool ok = false;

        for(L i=0; i<n; i++) {

            if(s.count(v[i])) {
                ok = true;
                break;
            }

            s.insert(v[i]);
        }

        if(ok) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}