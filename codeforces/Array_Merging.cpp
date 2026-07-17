#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        vector<L> a(n); 
        vector<L> b(n);

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        for(int i=0; i<n; i++) {
            cin>>b[i];
        }

        vector<L> freq1(2*n+1,0);
        vector<L> freq2(2*n+1,0);

        L count = 1;

        for(int i=1; i<n; i++) {

            if(a[i] == a[i-1]) {
                count++;
            }
            else {
                freq1[a[i-1]] = max(freq1[a[i-1]], count);
                count = 1;
            }
        }

        freq1[a[n-1]] = max(freq1[a[n-1]], count);

        count = 1;

        for(int i=1; i<n; i++) {

            if(b[i] == b[i-1]) {
                count++;
            }
            else {
                freq2[b[i-1]] = max(freq2[b[i-1]], count);
                count = 1;
            }
        }

        freq2[b[n-1]] = max(freq2[b[n-1]], count);

        L ans = 0;

        for(int i=1; i<=2*n; i++) {
            ans = max(ans, freq1[i]+freq2[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}