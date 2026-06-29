#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L n;
    cin>>n;

    vector<L> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<L> ans(n);

    for(int i=0; i<n; i++) {
        ans[v[i] - 1] = i + 1;
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}