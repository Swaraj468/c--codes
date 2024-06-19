#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v);
int main(void){
    vector<int>v;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    for(int i=0; i<10; i++){
        v.push_back(80);
    }
    print(v);
    // insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);
    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity: "<<v.capacity()<<"Size: "<<v.size()<<endl;
    // }
    // v.pop_back();
    // print(v);
    // v.pop_back();
    // print(v);
}
void print(vector<int> v){
    int size = v.size();
    for (int i=0; i<size; i++){
        cout<<v[i]<<endl;
    }
}