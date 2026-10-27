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

        L sum = 0;
        L ops = 0;

        for(L i=0; i<n; i++) {

            if(s[i] == ')') {
                sum--;
            } 
            else {
                sum++;
            }

            if(sum < 0) {
                ops++;
                sum = 0;
            }
        }

        cout<<ops<<endl;
    }

    return 0;
}