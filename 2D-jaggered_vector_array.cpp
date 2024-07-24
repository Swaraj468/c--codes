#include<bits/stdc++.h>
using namespace std;
int main(void){
    vector<vector<int>>arr(4);
    arr[0]=vector<int>(4);
    arr[1]=vector<int>(2);
    arr[2]=vector<int>(5);
    arr[3]=vector<int>(3);
    // row count
    int total_row = arr.size();
    // column count
    int total_column = arr[0].size();
    cout<<total_row<<" "<<total_column<<" "<<endl;
}