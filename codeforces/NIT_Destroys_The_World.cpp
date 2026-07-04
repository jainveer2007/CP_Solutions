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

        L first = -1;
        L last = -1;

        for(int i=0; i<n; i++) {

            if(v[i] != 0) {
                first = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--) {

            if(v[i] != 0) {
                last = i;
                break;
            }
        }

        if(first == -1) {
            cout<<0<<endl;
            continue;
        }

        L flag = 0;

        for(int i=first; i<=last; i++) {

            if(v[i] == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            cout<<2<<endl;
        }
        else {
            cout<<1<<endl;
        }
    }

    return 0;
}