#include<bits/stdc++.h>
using namespace std;
int main(void){
    int arr[2][3];
    int n=2;
    int m=3;
    // row-wise input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
             cout<<"Enter the value for(" << i <<", "<< j <<") : ";
            cin>>arr[i][j];
            
        // cout<<arr[i][j];
        }
       
    }
    cout<<"Printing 2D array: "<<endl;
    // row-wise
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}