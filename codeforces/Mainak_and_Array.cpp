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
            
            L ans = v[n-1] - v[0];

            for (int i=1; i<n; i++) {

                ans = max(ans, v[i]-v[0]);
            }

            for (int i=0; i<n-1; i++) {
                
                ans = max(ans, v[n-1]-v[i]);
            }

            for (int i=0; i<n-1; i++) {

                ans = max(ans, v[i]-v[i+1]);
            }

            cout<<ans<<endl;
        }

        return 0;
    }