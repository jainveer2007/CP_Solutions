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

        map<L,L> mp;

        for(L i=0; i<n; i++) {
            mp[v[i]]++;
        }

        L high = 0;

        for(auto i: mp) {
            high = max(high,i.second);
        }

        L operations=0;

        while(high<n) {

            operations++;

            if(high*2 <= n) {
                operations += high;
                high *= 2;
            }
            else {
                operations += n - high;
                high = n;
            }
        }

        cout<<operations<<endl;
    }
}