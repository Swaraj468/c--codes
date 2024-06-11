#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int ans = 0;
    int base = 1; // Represents 2^0 initially
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        ans += digit * base; // Add the current digit's decimal value to the answer
        n /= 10; // Remove the last digit from n
        base *= 2; // Move to the next power of 2
    }

    cout << "Answer is " << ans << endl;
}