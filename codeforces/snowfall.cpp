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

        vector<L> six;
        vector<L> two;
        vector<L> three;
        vector<L> other;

        for(int i=0; i<n; i++) {

            if(v[i]%6 == 0) {
                six.push_back(v[i]);
            }
            else if(v[i]%2 == 0) {
                two.push_back(v[i]);
            }
            else if(v[i]%3 == 0) {
                three.push_back(v[i]);
            }
            else {
                other.push_back(v[i]);
            }
        }

        for(auto x: six) {
            cout<<x<<" ";
        }

        for(auto x: two) {
            cout<<x<<" ";
        }

        for(auto x: other) {
            cout<<x<<" ";
        }

        for(auto x: three) {
            cout<<x<<" ";
        }

        cout<<endl;
    }

    return 0;
}