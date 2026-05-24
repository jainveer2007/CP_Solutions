#include<iostream>
using namespace std;

int search(int x, int arr[], int n, int V) {

    int fuel = V;  
    int maxFuelNeeded = 0;

    for(int i = 0; i <= x; i++) {
        bool isStation = false;

        for(int A = 0; A < n; A++) {

            if(i == arr[A]) {
                isStation = true;
                break;
            }
        } 

        if (isStation) {
            fuel = V; 
        }
        else {
            fuel--; 
        }

        int fuelNeededHere = V - fuel;

        if (fuelNeededHere > maxFuelNeeded) {
            maxFuelNeeded = fuelNeededHere;
        }
    }
    return maxFuelNeeded; 
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, x;
        cin >> n >> x;
        int arr[n];

        for(int a = 0; a < n; a++) {
            cin >> arr[a];
        }

        int V;
        cin >> V;

        int maxFuelRequired = search(x, arr, n, V);
        cout << maxFuelRequired << endl;
    }
    return 0;
}