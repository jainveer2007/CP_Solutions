#include<bits/stdc++.h>
using namespace std;

#define L long long 
#define Ma INT_MAX
#define Mi INT_MIN

int main() {

    int t;
    cin>>t;

    while(t--) {

        L n,k,x;
        cin>>n>>k>>x;

        if(x != 1) {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<1<<" ";
            cout<<endl;
        }
        else {
            if(n == 2 && k >= 2) {
                cout<<"YES"<<endl;
                cout<<1<<endl;
                cout<<2<<endl;
            }
            else if(n % 2 == 0 && k >= 2) {
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<2<<" "<<n-2<<endl;
            }
            else if(n % 2 == 1 && k >= 3) {
                cout<<"YES"<<endl;
                cout<<3<<endl;
                cout<<2<<" "<<2<<" "<<n-4<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}