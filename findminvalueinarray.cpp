#include<bits/stdc++.h>
using namespace std;
int findMinimumIn2darray(int arr[][3], int rowsize, int colsize);
int main(void){
    int arr[3][3]{
                 {10, 20, -2},
                 {40, 50, 60},
                 {70, 80, 90}
    };
   int rowsize = 3; 
   int colsize = 3;
   int ans=findMinimumIn2darray(arr, rowsize, colsize);
   cout<<ans<<endl;
}
int findMinimumIn2darray(int arr[][3], int rowsize, int colsize){
    int minValue = INT_MAX;
    for(int i = 0; i<rowsize; i++){
        for(int j = 0; j<colsize; j++){
            minValue = min(arr[i][j], minValue);
        }
    }
    return minValue;
}