#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        L count = 0;

        for(L i=0; i<k; i++) {

            if(s[i] == 'W') {
                count++;
            }
        }

        L mini = count;

        for(L i=k; i<n; i++) {

            if(s[i-k] == 'W') {
                count--;
            }
            if(s[i] == 'W') {
                count++;
            }

            mini = min(mini, count);
        }

        cout<<mini<<endl;
    }

    return 0;
}