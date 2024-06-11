#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    // Assuming a 32-bit integer for demonstration purposes.
    // Adjust the bitset size if using a different integer size.
    bitset<32> binary(n);

    // Print the binary representation.
    cout << "Binary representation is: " << binary << std::endl;

    return 0;
}
// Let's dry run the provided C++ code with an example input. Suppose the user inputs the integer `10`.

// 1. **Start of Program**: The program starts executing from the `main()` function.

// 2. **Variable Declaration**:
//     - `int n;`: An integer variable `n` is declared to store the user's input.

// 3. **User Input**:
//     - `cin >> n;`: The program waits for the user to input an integer. Let's say the user inputs `10`, so `n` is now `10`.

// 4. **Binary Conversion**:
//     - `bitset<32> binary(n);`: A `bitset` named `binary` of size 32 is created and initialized with the value of `n`, which is `10`. The binary representation of `10` in a 32-bit system is `00000000000000000000000000001010`. The `bitset` automatically handles the conversion from the integer value to its binary representation.

// 5. **Printing the Binary Representation**:
//     - `cout << "Binary representation is: " << binary << std::endl;`: This line prints the message `"Binary representation is: "` followed by the binary representation of `n` stored in `binary`, which is `00000000000000000000000000001010`, and then a newline character. The output will be:
//       ```
//       Binary representation is: 00000000000000000000000000001010
//       ```

// 6. **End of Program**:
//     - `return 0;`: The program returns `0`, indicating successful execution.

// This dry run demonstrates how the program reads an integer from the user, converts it to its binary representation using the `bitset` class, and then prints this binary representation to the console.
// #include <iostream>
// #include <string>
// using namespace std;

// string toBinary(int n) {
//     string binary = "";
//     bool isNegative = false;

//     // Check if the number is negative
//     if (n < 0) {
//         isNegative = true;
//         n = -n; // Convert to positive for binary conversion
//     }

//     // Convert to binary
//     do {
//         binary = to_string(n % 2) + binary;
//         n /= 2;
//     } while (n > 0);

//     // If the number was negative, prepend '-'
//     if (isNegative) {
//         binary = "-" + binary;
//     }

//     return binary;
// }

// int main() {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;

//     // Print the actual binary representation
//     cout << "Binary representation is: " << toBinary(n) << endl;

//     return 0;
// }