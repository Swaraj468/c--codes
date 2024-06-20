#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3];
    // Fill each row of the 2D array
    for (int i = 0; i < 2; ++i) {
        fill(begin(arr[i]), end(arr[i]), -1); // Filling each row with -1
    }

    // Display the 2D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}