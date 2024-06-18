#include<bits/stdc++.h>
using namespace std;
bool twosum(int arr[], int n, int target);
int main(){
    int arr[]={10, 5, 20, 15, 30};
    int n=5;
    // int target;
    // cout<<"Enter the number: "<<endl;
    // cin>>target;
   bool ans = twosum(arr, n, 60);
   if (ans == true){
    cout<<"Pair found"<<endl;

   }else{
    cout<<"Pair not found"<<endl;
   }

}
bool twosum(int arr[], int n, int target){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if  (target==arr[i]+arr[j]){
            return true;
          }
        }
    }
    return false;
}