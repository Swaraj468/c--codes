#include<bits/stdc++.h>
using namespace std;
int maximumnum(int arr[][3], int rowsize, int colsize); 
int main (void){

    int arr[3][3]={
                   {10, 20, 30},
                   {40, 50, 600},
                   {70, 80, 100}
    };
    int rowsize=3;
    int colsize=3;
    int ans = maximumnum(arr, rowsize, colsize);
    cout<<ans<<endl;

}
int maximumnum(int arr[][3], int rowsize, int colsize){

    int maxValue = INT_MIN;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            maxValue = max(arr[i][j], maxValue);
        }
        
    }
    return maxValue;

}