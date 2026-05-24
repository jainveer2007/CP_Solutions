    #include<bits/stdc++.h>
    using namespace std;

    vector<int> solve() {

        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        vector<int> vec;
        vec.push_back(arr[0]);

        for(int i=1; i<n; i++) {

            if(arr[i] >= arr[i-1]) {
                vec.push_back(arr[i]);
            }
        }

        return vec;
    }

    int main() {

        int t;
        cin >> t;

        while(t--) {

            vector<int> ans = solve();

            for(int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }

            cout << endl;
        }

        return 0;
    }