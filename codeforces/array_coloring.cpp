#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++) {    
            cin>>arr[i];
        } 

        int mid = arr[n/2];

        vector<int> v1(arr, arr + n/2);
        vector<int> v2(arr + n/2, arr + n);

        int sum1 = 0;
        int sum2 = 0;

        for(int x : v1) sum1 += x;
        for(int x : v2) sum2 += x;

        if(sum1 % 2 == 0 && sum2 % 2 == 0) {
            cout<<"YES"<<endl;
        }
        else if(sum1 % 2 != 0 && sum2 % 2 != 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}