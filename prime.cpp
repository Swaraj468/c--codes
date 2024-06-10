#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;

    bool isPrime = 1;

    for(int i=2; i<n; i++){
        if(n%i==0){
            //rem=0, not a prime
            //cout<<" Not a prime"<<endl;
            isPrime=0;
        break;
        }
    
    }
    if(isPrime == 0){
        cout<<" Not a prime Number"<<endl;
    }else{
        cout<<"is a Prime Number"<<endl;
    }
}