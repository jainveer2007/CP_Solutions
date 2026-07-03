#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    

        L n;
        cin>>n;

        string s;
        cin>>s;

        L count1 = 0;
        L count2 = 0;
        L maxi = 0;
        L Maxi = 0;

        for(int i=0; i<n; i++) {

            if(s[i] == '<') {
                count1++;
                maxi = max(maxi, count1);
            }
            else {
                count1 = 0;
            }

            if(s[i] == '>') {
                count2++;
                Maxi = max(Maxi, count2);
            }
            else {
                count2 = 0;
            }
        }

        L ans = max(Maxi, maxi);
        cout<<ans+1<<endl;
    }

    return 0;
}