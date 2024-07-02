#include<bits/stdc++.h>
using namespace std;
void sumofcol(int arr[][3], int rowsize, int colsize);
int main(void){
    int arr[3][3]={
                  {10, 20, 30},
                  {40, 50, 60},
                  {70, 80, 90}
    };
    int rowsize=3;
    int colsize=3;
    sumofcol(arr, rowsize, colsize);

}
void sumofcol(int arr[][3], int rowsize, int colsize){
    for(int j=0; j<colsize; j++){
        int sum=0;
        for(int i=0; i<rowsize; i++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}