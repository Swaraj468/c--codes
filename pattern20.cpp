#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int r=n; r>=1; r--){
        // Print stars with a space
        for(int col=1; col<=r; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}