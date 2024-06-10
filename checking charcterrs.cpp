#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    if (ch>97 && ch<122){
        cout<<"ch is lowercase"<<endl;

    }
    else if (ch>65 && ch<90){
        cout<<"ch is Uppercase"<<endl;
    }
    else{
        cout<<"ch is numeric"<<endl;
    }
}