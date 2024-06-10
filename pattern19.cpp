#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int r=1;
    while(r<=n){
        //space print karlo

        int space = n - r;
        while(space){
            cout<<" ";
            space=space-1;
        
        }
        //star print karlo

        int col=1;
        while(col<=r){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        r=r+1;


    }
}