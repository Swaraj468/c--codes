#include<bits/stdc++.h>
using namespace std;
// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if(isPrime(num)) {
//         cout << num << " is a prime number";
//     } else {
//         cout << num << " is not a prime number";
//     }
//     return 0;
// }
int main() {
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
        i = i+1;
    }
}
