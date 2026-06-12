#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L a,b,c,d;
        cin>>a>>b>>c>>d;

        L count = d - b;


            L ans = (a + count) - c;

            if(count < 0 || ans < 0) {
                cout<<-1<<endl;
            }
            else {
                cout<<count+ans<<endl;
            }
        }

    return 0;
}