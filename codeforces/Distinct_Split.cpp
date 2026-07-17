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

        vector<L> prefix(n);
        vector<L> suffix(n);
        vector<int> freq(26,0);

        L count = 0;

        for(int i=0; i<n; i++) {

            if(freq[s[i]-'a'] == 0) {
                count++;
            }

            freq[s[i]-'a']++;
            prefix[i] = count;
        }

        freq.assign(26,0);
        count = 0;

        for(int i=n-1; i>=0; i--) {

            if(freq[s[i]-'a'] == 0) {
                count++;
            }

            freq[s[i]-'a']++;
            suffix[i] = count;
        }

        L ans = 0;

        for(int i=0; i<n-1; i++) {

            ans = max(ans, prefix[i] + suffix[i+1]);

        }
        
        cout<<ans<<endl;
    }

    return 0;
}