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

        L mini = v[0];
        L sum = v[0];

        for(int i=1; i<n; i++) {

            mini = min(mini, v[i]);
            sum = sum + mini;
        }

        cout<<sum<<endl;
    }

    return 0;
}