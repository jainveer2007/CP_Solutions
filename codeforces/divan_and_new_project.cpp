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

        vector<pair<L,L>> building_map;

        for(int i=0; i<n; i++) {
            building_map.push_back({v[i], i});
        }

        sort(building_map.rbegin(), building_map.rend());

        vector<L> ans(n+1, 0);

        ans[0] = 0;

        L minutes = 0;
        L coordinate = 1;

        for(int i=0; i<n; i++) {

            ans[building_map[i].second + 1] = coordinate;

            minutes += 2 * abs(coordinate) * building_map[i].first;

            if(coordinate < 0) {
                coordinate = abs(coordinate) + 1;
            }
            else {
                coordinate = -coordinate;
            }
        }

        cout<<minutes<<endl;

        for(auto it : ans) {
            cout<<it<<" ";
        }

        cout<<endl;
    }

    return 0;
}