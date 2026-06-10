#include<bits/stdc++.h>
using namespace std;
#define L long long
#define mini INT_MIN
#define maxi INT_MAX

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        L arr[n];

        for(L i=0; i<n; i++) {
            cin>>arr[i];
        }

        int minusCount = 0;

        for(int i=0; i<n; i++) {

            if(arr[i] == -1) {
                minusCount++;
            }
        }

        L p = n - minusCount;
        L ans = 0;

        while(p < minusCount || minusCount%2 == 1) {

            ans++;
            p++;
            minusCount--;
        }

        cout<<ans<<endl;
    }

    return 0;
}