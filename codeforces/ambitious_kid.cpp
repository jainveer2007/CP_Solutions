#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            cout << 0;
            return 0;
        }
    }

    int temp = 0, curr = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            temp = arr[i];
            break;
        }
    }

    for(int i = n-1; i >= 0; i--) {
        if(arr[i] < 0) {
            curr = arr[i];
            break;
        }
    }

    if(temp == 0) cout << -(curr);
    else if(curr == 0) cout << temp;
    else cout << min(temp, -(curr));

    return 0;
}