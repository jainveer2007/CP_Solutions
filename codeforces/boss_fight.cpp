#include<bits/stdc++.h>
using namespace std;
#define L long long 

void solve() {

    L n;
    cin >> n;

    L total_sum = 0;

    map<int, int> freq;
    
    L max_f = 0;
    L maj_val = 0;
    
    for (L i=0; i<n; i++) {

        L x;
        cin >> x;

        total_sum += x;
        freq[x]++;

        if (freq[x] > max_f) {
            max_f = freq[x];
            maj_val = x;
        }
    }
    
    L others = n - max_f;
    
    L max_majority_played = min(max_f, others + 2);
    
    L ans = (total_sum - 1LL * max_f * maj_val) + 1LL * max_majority_played * maj_val;
    cout << ans << "\n";
}
 
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    L t; 
    cin>>t;

    while(t--) {
        solve();
    }
    return 0;
}
