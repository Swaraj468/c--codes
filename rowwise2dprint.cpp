#include<bits/stdc++.h>
using namespace std;
int main(void){
    int arr[3][2]={10, 20, 30, 40, 50, 60};
    int rowSize=3;
int colSize=2;
for(int rowIndex = 0; rowIndex<rowSize; rowIndex++){
    for(int colIndex=0; colIndex<colSize; colIndex++){
        cout<<arr[rowIndex][colIndex]<<" ";
    }
    cout<<endl;
}


}