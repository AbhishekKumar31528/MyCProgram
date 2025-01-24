#include <iostream>

using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // Assuming 32-bit integer

    int index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    // Print the binary representation
    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Call the function to convert decimal to binary
    decimalToBinary(decimal);

    return 0;
}

