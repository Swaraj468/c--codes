#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr, int size);
int main(void){
    int arr[]={10, 20, 30, 40, 50};
    int size = 5;
    ReverseArray(arr, size);
}
void ReverseArray(int arr, int size){
 int i=0;
    int j=size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[j]<<" ";
            j--;
            // or we can use break here!
        }
        cout<<arr[j]<<" ";
        j--;
    }
}
