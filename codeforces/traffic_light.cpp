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

        L count = 1;
        L maxi = 0;

        for(int i=0; i<n; i++) {

            if(s[i] == c) {
                while(s[i] != 'g') {

                    count++;
                }
            }

            maxi = max(maxi, count);
        }

        cout<<maxi<<endl;
    }

    return 0;
}