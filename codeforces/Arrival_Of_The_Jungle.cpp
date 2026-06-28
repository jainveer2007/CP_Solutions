#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L n;
    cin>>n;

    vector<L> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    L maxi = *max_element(v.begin(), v.end());
    L mini = *min_element(v.begin(), v.end());

    L maxPos = 0;
    L minPos = 0;

    for(int i=0; i<n; i++) {

        if(v[i] == maxi) {
            maxPos = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {

        if(v[i] == mini) {
            minPos = i;
            break;
        }
    }

    L ans = maxPos + (n-1-minPos);

    if(maxPos > minPos) {
        ans--;
    }

    cout<<ans<<endl;
    
}