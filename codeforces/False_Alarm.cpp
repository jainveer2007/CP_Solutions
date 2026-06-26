#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,x;
        cin>>n>>x;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        L first = 0;
        L last = 0;

        for(int i=0; i<n; i++) {

            if(v[i] == 1) {
                first = i;
                break;
            }
        }
        for(int i=n-1; i>0; i--) {

            if(v[i] == 1) {
                last = i;
                break;
            }
        }

        L count = last - first + 1;

        if(count > x) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}