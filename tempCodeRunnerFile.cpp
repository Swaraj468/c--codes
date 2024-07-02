#include<bits/stdc++.h>
using namespace std;
void populate(int arr[],int n);
int main(void){
    int arr[];

    int n;
    populate(arr, n);
}
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
    cout<<arr[j]<<endl;
}