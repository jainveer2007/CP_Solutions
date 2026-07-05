#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        string s,t;
        cin>>s>>t;

        L n = s.size();
        L m = t.size();

        vector<L> frequency_in_t(26,0);

        for(L i=0; i<m; i++) {

            frequency_in_t[t[i] - 'A']++;
        }

        for(L i=n-1; i>=0; i--) {

            if(frequency_in_t[s[i] - 'A'] > 0) {
                frequency_in_t[s[i] - 'A']--;
            }
            else {
                s[i] = '.';
            }
        }

        string final_string="";

        for(L i=0; i<n; i++) {

            if(s[i] != '.') {
                final_string+=s[i];
            }
        }

        if(final_string == t) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}