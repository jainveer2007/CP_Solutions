#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        int n;
        cin>>n;

        vector<L> smallest;
        vector<L> secondSmallest;

        for(int i=0; i<n; i++) {

            int m;
            cin>>m;

            vector<L> v(m);

            for(int j=0; j<m; j++) {
                cin>>v[j];
            }

            sort(v.begin(), v.end());

            smallest.push_back(v[0]);
            secondSmallest.push_back(v[1]);
        }

        L sum = 0;
        L minSmallest = LLONG_MAX;
        L minSecondSmallest = LLONG_MAX;

        for(int i=0; i<n; i++) {

            sum = sum + secondSmallest[i];

            minSmallest = min(minSmallest, smallest[i]);

            minSecondSmallest = min(minSecondSmallest, secondSmallest[i]);
        }

        cout << sum - minSecondSmallest + minSmallest << endl;
    }

    return 0;
}