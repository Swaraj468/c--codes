#include<bits/stdc++.h>
using namespace std;
int main(void){
    int arr[2][3];
    int n=2;
    int m=3;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<"Enter the value for (" << i << ", "<< j << ")  : ";
            cin >> arr[i][j];
        }
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}