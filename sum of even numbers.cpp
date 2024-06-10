#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int sum=0;
    int i = 1;
    cin>>num;
    while(i<=num){
       cout<<i<<" ";
       if((i%2)==0){
        sum = sum + i;
       }
       i = i + 1;
    }
    cout<<"sum of even number is "<<sum<<endl;
}