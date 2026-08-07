#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        vector<L> a(n);

        for(L i=0; i<n; i++) {
            cin>>a[i];
        }

        bool ok = true;
        L prev = 0;

        for(L i=0; i<n; i++) {

            L need = prev + 1;

            if(a[i] < need) {
                ok = false;
                break;
            }

            L extra = a[i] - need;

            if(i != n - 1) {
                a[i + 1] += extra;
            }

            prev = need;
        }

        if(ok) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

}