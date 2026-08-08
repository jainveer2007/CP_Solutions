#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L w,h;
        cin>>w>>h;

        L ans = 0;

        L k;
        cin>>k;

        L first,last;

        for(int i=0; i<k; i++) {

            L x;
            cin>>x;

            if(i == 0) {
                first = x;
            }

            last = x;
        }

        ans = max(ans,(last-first)*h);
        cin>>k;

        for(int i=0; i<k; i++) {

            L x;
            cin>>x;

            if(i == 0) {
                first = x;
            }

            last = x;
        }

        ans = max(ans,(last-first)*h);
        cin>>k;

        for(int i=0; i<k; i++) {

            L y;
            cin>>y;

            if(i == 0) {
                first = y;
            }

            last = y;
        }

        ans = max(ans,(last-first)*w);
        cin>>k;

        for(int i=0; i<k; i++) {

            L y;
            cin>>y;

            if(i == 0) {
                first = y;
            }

            last = y;
        }

        ans = max(ans,(last-first)*w);
        cout<<ans<<endl;
    }

    return 0;
}