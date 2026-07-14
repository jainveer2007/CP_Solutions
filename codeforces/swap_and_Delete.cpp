#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        string s;
        cin>>s;

        L n = s.size();

        L one = 0;
        L zero = 0;

        for(int i=0; i<n; i++) {

            if(s[i] == '0') {
                zero++;
            }
            if(s[i] == '1') {
                one++;
            }
        }

        L l = 0;

        for(int i=0; i<n; i++) {

            if(s[i] == '0' && one > 0) {
                one--;
                l++;
            }
            else if(s[i] == '1' && zero > 0) {
                zero--;
                l++;
            }
            else {
                break;
            }
        }

        cout<<n-l<<endl;
    }

    return 0;
}