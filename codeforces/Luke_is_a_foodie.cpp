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

        L left = v[0] - x;
        L right = v[0] + x;
        
        L count = 0;

        for(int i=1; i<n; i++) {

            left = max(left, v[i] - x);
            right = min(right, v[i] + x);

            if(left > right) {

                count++;

                left = v[i] - x;
                right = v[i] + x;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}