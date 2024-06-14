#include<bits/stdc++.h>
using namespace std;

void solve1(int arr[]; int n);

void print(int arr[5], int size);

int main(void){

int arr[]={1,2,4,5,6};
int size =5;
solve1(arr, size);
print(arr,size);
// int brr[5]={1,2,3,4,5};
// int crr[4]={10};

// fill(arr, arr+10, 23);

// cout<<brr[0]<<endl;
// cout<<crr[0]<<endl;
// cout<<arr[0]<<" "<<arr[1]<<endl;
// for(int i = 0; i<5; i++){
//     cout<<"Enter the value for box index: "<< i <<endl;
//     cin>>arr[i];
// }
// for(int i=0; i<5; i++){
//     cout<<arr[i]<<" ";
// }


//     return 0;
}
void solve1(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=arr[i]*10;
    }
}
void print(int arr[5], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}