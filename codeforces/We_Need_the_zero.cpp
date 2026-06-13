#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        L total = 0;

        for(int i=0; i<n; i++) {
            total ^=arr[i];
        }

        if(n%2 == 1) {
            cout<<total<<endl;
        }
        else {
            if(total == 0) {
                cout<<total<<endl;
            }
            else {
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}