#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>> t;

    while(t--) {

        int n,k;
        cin>>n >>k;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int count = 0;

        for(int i=0; i<n; i++) {
            if(arr[i]==k) {
                cout<<"YES"<<endl;
                break;
            }
            else {
                count++;
            }
        }

        if(count==n) {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}