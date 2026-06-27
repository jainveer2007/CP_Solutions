#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

        L n;
        cin>>n;

        string s;
        cin>>s;

        int mid = n/2;
        int sum1 = 0;
        int sum2 = 0;

        bool lucky = true;

        for(int i=0; i<mid; i++) {
            
            if(s[i] != '4' && s[i] != '7') {
                lucky = false;
            }

            sum1 = sum1 + (s[i] - '0');
        }

        for(int i=mid; i<n; i++) {

            if(s[i] != '4' && s[i] != '7') {
                lucky = false;
            }

            sum2 = sum2 + (s[i] - '0');
        }

        if(lucky && sum1 == sum2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    return 0;
}