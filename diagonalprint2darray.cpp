#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
    int arr[3][3]={10, 20, 100, 30, 40, 200, 50, 60, 300};
    int n=3;
    int m=3;
//  for time complexity n
for(int i=2; i<m; --i){
    cout<<arr[i][i]<<" "<<endl;
}

    // for time complexity O(n^2)
    // int m=2;
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==j){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
}