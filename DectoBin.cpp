#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(void){
    int n;
    cin>>n;

    int ans = 0;
    int i = 1;
    while(n!=0){
         int bit = n & 1;
         
         ans = ans + bit * i;
         n = n >> 1;
         i=i*10;

    }
    cout<<" Answer is " << ans << endl;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 1; // Start with the least significant digit place
//     while(n != 0){
//         int bit = n & 1; // Extract the least significant bit
//         ans += bit * i; // Add the bit multiplied by its place value
//         n = n >> 1; // Shift n right to process the next bit
//         i *= 10; // Move to the next place value in the binary number
//     }
//     cout << "Answer is " << ans << endl;
// }
// <!-- Let's dry run the provided code with an example input. Suppose `n = 13`, which in binary is `1101`.


// **Dry Run Steps:**

// 1. **Initialization**: `n = 13`, `ans = 0`, `i = 1`.

// 2. **First Iteration**:
//    - `n != 0`? Yes.
//    - `bit = n & 1` => `bit = 13 & 1` => `bit = 1`.
//    - `ans += bit * i` => `ans = 0 + 1 * 1` => `ans = 1`.
//    - `n = n >> 1` => `n = 13 >> 1` => `n = 6`.
//    - `i *= 10` => `i = 10`.

// 3. **Second Iteration**:
//    - `n != 0`? Yes.
//    - `bit = n & 1` => `bit = 6 & 1` => `bit = 0`.
//    - `ans += bit * i` => `ans = 1 + 0 * 10` => `ans = 1`.
//    - `n = n >> 1` => `n = 6 >> 1` => `n = 3`.
//    - `i *= 10` => `i = 100`.

// 4. **Third Iteration**:
//    - `n != 0`? Yes.
//    - `bit = n & 1` => `bit = 3 & 1` => `bit = 1`.
//    - `ans += bit * i` => `ans = 1 + 1 * 100` => `ans = 101`.
//    - `n = n >> 1` => `n = 3 >> 1` => `n = 1`.
//    - `i *= 10` => `i = 1000`.

// 5. **Fourth Iteration**:
//    - `n != 0`? Yes.
//    - `bit = n & 1` => `bit = 1 & 1` => `bit = 1`.
//    - `ans += bit * i` => `ans = 101 + 1 * 1000` => `ans = 1101`.
//    - `n = n >> 1` => `n = 1 >> 1` => `n = 0`.
//    - `i *= 10` => `i = 10000`.

// 6. **Loop Ends**: `n != 0`? No.

// **Output**: `Answer is 1101`.

// The dry run shows that the code correctly converts the decimal number 13 to its binary representation `1101` by constructing the binary number as an integer where each digit represents a bit in the binary form of the original number. -->