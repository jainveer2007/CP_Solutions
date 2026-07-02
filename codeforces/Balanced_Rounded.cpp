#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n,k;
        cin>>n>>k;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        L count = 1;
        L maxi = 1;
        sort(v.begin(), v.end());

        if(n == 1) {
            cout<<0<<endl;
        }
        else {
            for(int i=0; i<n-1; i++) {

                if(v[i+1] - v[i] <= k) {
                    count++;
                }
                else {
                    maxi = max(maxi, count);
                    count = 1;
                }
            }

            maxi = max(maxi, count);
            cout<<n-maxi<<endl;
        }
    }

    return 0;
}