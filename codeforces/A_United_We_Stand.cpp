#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        long long n;
        cin>>n;

        vector<long long> arr(n);

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        long long data = *max_element(arr.begin(), arr.end());

        vector<long> b;
        vector<long> c;

        for(int i=0; i<n; i++) {

            if(arr[i] == data) {
                c.push_back(arr[i]);
            }
            else {
                b.push_back(arr[i]);
            }
        }

        int Blen = b.size();
        int Clen = c.size();

        if(Clen == 0) {
            cout<<-1<<endl;
        }
        else {
            cout<<Blen<<" "<<Clen<<endl;
            
            for(auto i:b) {
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:c) {
                cout<<i<<" ";   
            }
            cout<<endl;
        }
    }

    return 0;
}