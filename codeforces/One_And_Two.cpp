#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int totalCount = 0;

        for(int i = 0; i < n; i++) {

            if(arr[i] == 2) {
                totalCount++;
            }
        }

        if(totalCount % 2 != 0) {
            cout<<-1<<endl;
        }
        else {
            int result = -1;
            int leftCount = 0;

            for(int k = 0; k < n - 1; k++) {

                if(arr[k] == 2) {
                    leftCount++;
                }

                int rightCount = totalCount - leftCount;

                if(leftCount == rightCount) {
                    result = k + 1;
                    break;
                }
            }

            cout<<result<<endl;
        }
    }

    return 0;
}