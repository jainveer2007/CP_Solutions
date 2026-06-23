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

        sort(v.begin(), v.end());

        map<int, int> mp;   

        for(int i=0; i<v.size(); i++) {
            mp[v[i]]++;
        }

        int ans = 0;

        for(auto it : mp) {

            int element = it.first;
            int count = it.second;

            if(count > element) {
                ans += count - element;
            }
            else if(count < element) {
                ans += count;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}