#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        string s;
        cin>>s;

        L n = s.length();

        if(s[0] != s[n-1]) {

            if(s[0] == 'a') {
                s[0] = 'b';
            }
            else {
                s[0] = 'a';
            }
        }

        cout<<s<<endl;
    }

    return 0;
}