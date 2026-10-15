#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        string a,b;
        cin>>a>>b;

        L n = a.length();
        L m = b.length();
        L maxi = 0;

        for(L i=0; i<n; i++) {
            for(L j=0; j<m; j++) {

                L count = 0;

                while((i+count < n) && (j+count < m) && (a[i+count] == b[j+count])) {
                    count++;
                }

                maxi = max(maxi, count);
            }
        }

        cout<<(n+m-2)*maxi<<endl;
    }
    return 0;
}