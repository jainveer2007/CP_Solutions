#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,m;
        cin>>n>>m;

        string p,q;
        cin>>p>>q;

        L freq[26] = {0};

        for(int i=0; i<n; i++) {
            freq[p[i]-'a']++;
        }

        for(int i=0; i<m; i++) {
            freq[q[i]-'a']--;
        }

        bool flag = true;

        for(int i=0; i<26; i++) {

            if(freq[i] < 0) {
                flag = false;
            }
        }

        if(freq['s'-'a'] != 1 || freq['i'-'a'] != 1 || freq['x'-'a'] != 1) {
            flag = false;
        }

        for(int i=0; i<26; i++) {

            if(i != 's'-'a' && i != 'i'-'a' && i != 'x'-'a') {

                if(freq[i] != 0) {
                    flag = false;
                }
            }
        }

        if(flag) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}