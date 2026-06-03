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

        bool unsorted = false;

        for(int i=0; i<n-1; i++) {

            if(arr[i] > arr[i+1]) {
                cout<<0<<endl;
                unsorted = true;
                break;
            }
        }

        if(unsorted) {
            continue;
        }

        L ans = INT_MAX;

        for(int i=0; i<n-1; i++) {

            L mini = arr[i+1] - arr[i];
            L count = mini/2 + 1;

            ans = min(ans, count);            
        }

        cout<<ans<<endl;
    }

    return 0;
}