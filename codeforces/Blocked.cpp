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

        sort(a.begin(), a.end(), greater<L>());

        bool duplicate = false;

        for(L i=1; i<n; i++) {

            if(a[i] == a[i - 1]) {
                duplicate = true;
                break;
            }
         }

        if(duplicate) {
            cout<<-1<<endl;
        }
        else {
            for(L x : a) {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}