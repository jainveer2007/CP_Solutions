#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        if(n <= 9) {
            cout<<n<<endl;
        }
        else {
            if(n < 100) {
                int ans = 9 + min(9, n/10);
                cout<<ans<<endl;
            }
            else if(n >= 100 && n < 1000) {
                int ans1 = 9 + min(9, n/10) + min(9, n/100);
                cout<<ans1<<endl;
            }
            else if(n >= 1000 && n < 10000) {
                int ans2 = 9 + min(9, n/10) + min(9, n/100) + min(9, n/1000);
                cout<<ans2<<endl;
            }
            else if(n >= 10000 && n < 100000) {
                int ans3 = 9 + min(9, n/10) + min(9, n/100) + min(9, n/1000) + min(9, n/10000);
                cout<<ans3<<endl;
            }
            else {
                int ans4 = 9 + min(9, n/10) + min(9, n/100) + min(9, n/1000) + min(9, n/10000) + min(9, n/100000);
                cout<<ans4<<endl;
            }
        }
    }

    return 0;
}