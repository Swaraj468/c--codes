#include<bits/stdc++.h>
using namespace std;
int main(void){
    int arr[3][3]={
                  {10, 20, 100},
                  {30, 40, 200},
                  {50, 60, 300}

    };
    int n=3;
    int m=3;
    cout << arr[0][m-1] << " "; // Prints 100, the top-right element

    for(int i=1; i<n; i++){
        if(i == 1){
            cout<<arr[i][i]<<" ";
        }
        if(i == n-1){
            cout<<arr[i][0]<<" ";
        }
    }
    // cout << arr[1][1] << " "; // Prints 40, the middle element
    // cout << arr[2][0] << " "; 
    // cout<< arr[0][m-1]<<" ";
    // for(int i=1; i<n; i++){
    //     cout<< arr[i][i]<<" ";
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    // if(i>=j && i<=j){
    //     cout<<arr[i][j]<<" ";
    // }
    //     }

    } 
    