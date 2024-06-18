#include<bits/stdc++.h>
using namespace std;
void dutchflag(int arr[], int n);
int main(void){
    int arr[]={1, 2, 1, 0, 2, 0, 1, 0};
    int n=8;
    dutchflag(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
void dutchflag(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }else if(arr[i] == 2){
            twoCount++;
        }
        
    }
    // fill should be used outside loop
        fill(arr, arr+zeroCount, 0);
        fill(arr+zeroCount, arr+zeroCount+ oneCount, 1);
        fill(arr+zeroCount+oneCount, arr+n, 2);
}