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

        if(n == 1) {
            cout<<"YES"<<endl;
            continue;
        }

        vector<char> v;
        map<char,L> mp;

        for(auto it : s) {
            v.push_back(it);
            mp[it]++;
        }

        L odd = 0;

        for(auto it : mp) {

            if(it.second % 2 != 0) {
                odd++;
            }
        }

        if(odd - 1 <= k) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}