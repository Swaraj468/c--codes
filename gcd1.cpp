#include<bits/stdc++.h>
using namespace std;
int main(void){
    int A, B;
    if(A  == 0) return B;
    if(B == 0) return A;
    while(A>0 && B>0){
        if(A>B){
            A=A-B;
        }else{
            B=B-A;
        }

    }
    return A == B ? B : A;

}