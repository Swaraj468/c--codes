#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
    int arr [3][2] = {10, 20, 30, 40, 50, 60};
    int m=3;
    int n=2;
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // for square matrix
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}