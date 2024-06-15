#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int size);
int main(void){
    int arr[]={10, 20, 30, 40, 50, 60, 60};
    int size = 7;
    // int arr[];
    // int size=7;
    // cout<<"Enter the numbers: "<<endl;
    // cin>>arr[i];
    
    ReverseArray(arr, size);
}
void ReverseArray(int arr[], int size){
 int i=0;
    int j=size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[j]<<" ";
            j--;
            // or we can use break here!
        }else{
        // swap(arr[i], arr[j]);
        cout<<arr[j]<<" ";
        // i++;
        j--;
        }
    }
}
