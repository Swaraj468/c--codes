#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b){
if(a%b==0) return 0;
    return (b, a%b);

}
int main (){
    cout<< gcd (4, 12)<<endl;
    cout<< gcd (12, 18)<<endl;

}