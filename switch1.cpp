#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n_;
    cin>>n_;
    int rs100_, rs50_, rs20_, rs1_;

    switch(1){
        case 1: rs100_= n_/100;
         n_=n_%100;
        cout<<" No. of notes for rs100 is "<<rs100_<<endl;


        case 2: rs50_=n_/50;
        n_=n_%50;
        cout<<" No. of notes for rs50 is "<<rs50_<<endl;

        case 3 : rs20_=n_/20;
        n_=n_%20;
        cout<<" No. of notes for rs20 is "<<rs20_<<endl;

        case 4: rs1_=n_/1;
        n_=n_/1;
        cout<<" No. of notes for rs1 is "<<rs1_<<endl;
    }

    }
