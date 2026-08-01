#include<bits/stdc++.h>
using namespace std;
#define L long long 

int main() {

    L t;
    cin>>t;

    while(t--) {    
        
        L n;
        cin>>n;

        vector<L> v(n);

        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        vector<L> ans(n);

        L flag = 0;

        for(int i=0; i<n; ) {

            L start = i;

            while(i+1 < n && v[i] == v[i+1]) {
                i++;
            }

            L end = i;

            if(start == end) {
                flag = 1;
                break;
            }

            for(int j=start; j<end; j++) {
                ans[j] = j+2;
            }

            ans[end] = start+1;

            i++;
        }

        if(flag == 1) {
            cout<<-1<<endl;
        }

        else {

            for(int i=0; i<n; i++) {
                cout<<ans[i]<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}