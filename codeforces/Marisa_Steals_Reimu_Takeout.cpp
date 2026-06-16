#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    L t;
    cin >> t;

    while(t--) {

        L n;
        cin >> n;

        L cnt0 = 0;
        L cnt1 = 0;
        L cnt2 = 0;

        for(int i = 0; i < n; i++) {
            L x;
            cin >> x;

            if(x == 0) {
                cnt0++;
            }
            else if(x == 1) {
                cnt1++;
            }
            else {
                cnt2++;
            }
        }

        L ans = cnt0;

        L common = min(cnt1, cnt2);
        ans += common;

        cnt1 -= common;
        cnt2 -= common;

        ans += cnt1 / 3;
        ans += cnt2 / 3;

        cout<<ans<<endl;
    }

    return 0;
}