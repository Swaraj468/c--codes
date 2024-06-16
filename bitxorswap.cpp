#include <bits/stdc++.h>
using namespace std;
int main(void){
    // int a=10;
    // int b=11;
    // int a=3, b=17;
      int a=77, b=13;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b<<" "<<endl;
}