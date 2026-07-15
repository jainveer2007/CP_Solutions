#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n,p;
        cin>>n>>p;

        vector<L> a(n);
        vector<L> b(n);

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        for(int i=0; i<n; i++) {
            cin>>b[i];
        }

        vector<pair<L,L>> v;

        for(int i=0; i<n; i++) {
            v.push_back({b[i], a[i]});
        }

        sort(v.begin(), v.end());

        L ans = n * p;
        L informed = 1;

        for(int i=0; i<n; i++) {

            L cost = v[i].first;
            L capacity = v[i].second;

            if(cost >= p) {
                break;
            }

            L people = min(capacity, n - informed);

            ans = ans - (people * p);
            ans = ans + (people * cost);

            informed = informed + people;

            if(informed == n) {
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}