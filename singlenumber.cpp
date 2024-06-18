#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 2, 1};
    int size = 5;
    
    for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0; j < size; j++){
            // Check if the same value is found at a different index
            if(arr[i] == arr[j] && i != j){
                isDuplicate = true;
                break; // No need to check further if a duplicate is found
            }
        }
        // If no duplicates were found, print the element
        if(!isDuplicate){
            cout << arr[i] << endl;
        }
    }
}