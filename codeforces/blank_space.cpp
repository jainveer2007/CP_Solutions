#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        L count = 0;
        L maxCount = 0;

        vector<L> v;

        for(int i=0; i<n; i++) {

            if(arr[i] == 0) {
                count++;
                v.push_back(count);
            }
            else {
                count = 0;
            }
        }

        sort(v.begin(), v.end());
        int ans = v.back();

        if(v.empty()) {
            cout<<0<<endl;
        }
        else {
            cout<<ans<<endl;
        }
    }

    return 0;
}