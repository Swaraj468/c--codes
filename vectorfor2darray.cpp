#include<bits/stdc++.h>
using namespace std;

bool searchinvector2d(vector<vector<int>> arr, int target);
int main (void){
    vector<vector<int>>arr(4, vector<int>(3,0));
    int n = arr.size();
    int m = arr[0].size();
    int target = 0;

    bool ans = searchinvector2d(arr, target);
    cout << "ans is: "<<ans <<endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<arr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // } 
    
}
bool searchinvector2d(vector<vector<int>> arr, int target){
    int n = arr.size();
    int m = arr[0].size();
    // int target = 44;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==target){
            return true;
           }
        }
    }
    return false; 
}