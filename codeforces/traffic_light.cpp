#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        char c;
        cin>>c;

        string s;
        cin>>s;

        if(c == 'g') {
            cout<<0<<endl;
            continue;
        }

        string S = s+s;

        L maxi = 0;
        L nextGreen = -1;

        for(L i=2*n-1; i>=0; i--) {

            if(S[i] == 'g') {
                nextGreen = i;
            }

            if(i<n && S[i] == c) {
                maxi = max(maxi, nextGreen-i);
            }
        }

        cout<<maxi<<endl;
    }

    return 0;
}