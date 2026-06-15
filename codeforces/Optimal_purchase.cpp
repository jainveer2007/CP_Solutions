#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, a, b;
        cin>>n>>a>>b;

        long long cost = 0;
        long long groups = n/3;
        long long R = n%3;

        cost = groups*b + R*a;

        if(b >= 3*a) {
            cost = n*a;
        } 
        else {
            long long leftCost = min(b, R*a);
            cost = groups*b + leftCost;
        }

        cout<<cost<<endl;
    }

    return 0;
}