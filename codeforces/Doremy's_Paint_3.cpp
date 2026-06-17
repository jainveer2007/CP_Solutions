#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        int first = arr[0];
        int last = arr[n-1];
        bool good = true;

        for(int i=0; i<n; i++) {

            if(arr[i] != first && arr[i] != last) {
                good = false;
                break;
            }
        }

        if(!good) {
            cout<<"No"<<endl;
        }
        else if(first == last) {
            cout<<"Yes"<<endl;
        }
        else {
            int cnt1 = count(arr.begin(), arr.end(), first);
            int cnt2 = count(arr.begin(), arr.end(), last);

            if(abs(cnt1 - cnt2) <= 1) {
                cout<<"Yes"<<endl;
            } 
            else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}