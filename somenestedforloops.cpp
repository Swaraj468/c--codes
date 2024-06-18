#include<bits/stdc++.h>
using namespace std;
void pairsof(int arr[], int n);
int main(void){
    int arr[]={10, 20, 30, 40, 50, 60};
    int n=6;
    pairsof(arr, n);

}
void pairsof(int arr[], int n){
    //1st pair pattern
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         cout<<arr[i]<<","<<arr[j]<<endl;
    //     }
        
    //     }
    // second pair pattern
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //          cout<<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }
    // third pair pattern
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //          cout<<arr[i]<<","<<arr[j]<<endl;
    //     }
    // }
    // fourth pair pattern
    // for(int i=0; i<n; i++){
    //     for(int j= n-1; j>=0; j--){
    //         cout<<arr[i]<<","<<arr[j]<<endl;
    //     }
    //     }
    // fifth pair pattern
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }

    }
