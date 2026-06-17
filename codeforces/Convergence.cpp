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

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int i = 0;
        int j = n - 1;
        int calls = 0;

        while(i < j) {

            if(a[i] != a[j]) {
                L pos = (a[i] + a[j]) / 2;
                a[i] = pos;
                a[j] = pos;
                calls++;
            }

            i++;
            j--;
        }

        cout<<calls<<endl;
    }

    return 0;   
}