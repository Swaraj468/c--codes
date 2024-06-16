#include<bits/stdc++.h>
using namespace std;



// void printZerosAndOnes(int arr[], int n);
// int findMax(int arr[], int size);

// bool findTarget(int arr[], int size, int target);

// void solve1(int arr[], int n);

// void print(int arr[5], int size);
void TwoPointer(int arr[], int size);

int main(){

int arr[] = {10, 20, 30, 40, 50, 60, 70};
int size = 7;
TwoPointer(arr, size);

// int arr[]={1,2,4,5,6};
// int size =5;
// for(int i=0; i<size; i++){
//     cout<<"Enter the input value for index: "<< i <<endl;
//     cin>>arr[i];
// }

// printZerosAndOnes(arr, size);


// cout<<" max number is: "<< findMax(arr, size) <<endl;

// cout<<"Enter your target: "<<endl;
// cin>>target;

// bool ans = findTarget(arr, size, target);
// cout<<"ans: "<<ans <<endl;


// solve1(arr, size);
// print(arr,size);
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
void TwoPointer(int arr[], int size){
    int i=0;
    int j=size-1;
    // while(i<=j){
    //     if(i==j){
    //         // print only 1 times
    //         cout<< arr[i] <<" ";
    //         i++;
    //         // or we can use break instead of i+_

    //     }else{

        
    //     // cout<<arr[i]<<" ";
    //     // i++;
    //     cout<<arr[j]<<" ";
    //     j--;
    //     }
    // }
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int k = 0; k<size; k++){
        cout << arr[k]<<" ";
    }

    }

// void printZerosAndOnes(int arr[], int size){
//     int zeroCount = 0;
//     int oneCount = 0;

//     //traverse Array
//     for(int i=0; i<size; i++){
        
//         if(arr[i]==0){
//             zeroCount++;

//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }
//     cout<<"Total zeros: "<<zeroCount <<endl;
//     cout<<"Total Ones: "<<oneCount<<endl;
    
// }
// int findMax(int arr[], int size){
//     int maxans = INT_MIN;
//     for(int i=0; i<size; i++){
//         maxans= max(maxans, arr[i]);

//     }
//     return maxans;
// }
// bool findTarget(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
       
//         if(arr[i] == target){
//             return true;
//         }
//     }
//     return false;
// }
// void solve1(int arr[], int n){
//     for(int i=0; i<n; i++){
//         arr[i]=arr[i] * 10;
//     }
// }
// void print(int arr[5], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

// }