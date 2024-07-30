#include<bits/stdc++.h>
using namespace std;
int slowExponentiation(int a, int b);
int main(void){
    cout << slowExponentiation(5, 4) << endl;
    return 0;

}
int slowExponentiation(int a, int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans*=a;
    }
    return ans;

}