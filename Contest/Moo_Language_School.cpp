#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {   
        
        L n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        L count = 0;

        for(L i=0; i<n; i += k) {

            bool flag = false;

            for(L j=i; j<i+k; j++) {

                if(s[j] == '0') {
                    flag = true;
                    break;
                }
            }

            if(flag == false) {
                count++;
            }
        }

        cout << count << endl;
    }
}