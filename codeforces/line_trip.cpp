#include<bits/stdc++.h>
using namespace std;
#define L long long

int main() {

    L t;
    cin>>t;

    while(t--) {

        L n,x;
        cin>>n>>x;

        vector<L> points_arr;
        points_arr.push_back(0);

        for(int i=0;i<n;i++) {
            L point;
            cin>>point;
            points_arr.push_back(point);
        }

        points_arr.push_back(x);
        n=points_arr.size();

        L max_distance_between_points=INT_MIN;

        for(int i=1;i<n;i++) {
            if(i==n-1) max_distance_between_points=max(max_distance_between_points,2*(points_arr[i]-points_arr[i-1]));
            else max_distance_between_points=max(max_distance_between_points,points_arr[i]-points_arr[i-1]);
        }

        cout<<max_distance_between_points<<endl;
    }

    return 0;
}