#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,k;
        cin>>n>>k;

        vector<pair<L,L>> v;

        for(int i=0; i<n; i++) {

            L x;
            cin>>x;

            L rem = x%k;

            if(rem == 0) {
                rem = k;
            }

            v.push_back({rem, i + 1});
        }

        sort(v.begin(), v.end(), [](pair<L,L> &a, pair<L,L> &b) {

            if(a.first == b.first) {
                return a.second < b.second;
            }

            return a.first > b.first;
        });

        for(int i=0; i<n; i++) {
            cout<<v[i].second<<" ";
        }

        cout<<endl;
    }

    return 0;
}