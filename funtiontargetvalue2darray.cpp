#include<bits/stdc++.h>
using namespace std;
bool search2DArray(int arr[][4], int n, int m, int target);
int main (void){
    int arr[3][4] = {
                    {10, 11, 12, 13},
                    {20, 21, 22, 23},
                    {31, 32, 44, 55},

    };
    int n=3;
    int m=4;
    int target = 44;
    bool ans = search2DArray(arr, n, m, target);
    // cout<<"Target is found: "<< target<<endl;
   cout << "ans is: "<<ans <<endl;
    // Print the result
    // if(found){
    //     cout << "Target " << target << " found in the array." << endl;
    // } else {
    //     cout << "Target " << target << " not found in the array." << endl;

    // }
}
bool search2DArray(int arr[][4], int n, int m, int target){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target){
                return true; 
            }
           
        }
         
    }
    return false;

}