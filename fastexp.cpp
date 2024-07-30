#include<bits/stdc++.h>
using namespace std;
int fastExponentiation(int a, int b);
int main(void){
 cout << fastExponentiation(5, 4) << endl;
    return 0;
}
int fastExponentiation(int a, int b){
    int ans = 1;
    while(b>0){
        if(b & 1){
            ans = ans*a;
        }
        a = a*a;
        b>>=1;
    }
    return ans;
}