
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //print space first as 1st triangle
       int space = n - i;
       while(space){
        cout<<" ";
        space = space - 1;

       }
       //print 2nd triangle

       int j = 1;
       while(j<=i){
        cout<<j;
        j=j+1;
       }

       //print 3rd triangle 

       int start = i - 1;
       while (start){
        cout<<start;
        start=start - 1;
       }
       cout<<endl;
       i=i+1;

    }
}