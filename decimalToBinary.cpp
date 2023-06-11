#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary
vector<int> decimalToBinary(int decimal) {
    vector<int> binary;
    
    while (decimal > 0) {
        // Get the remainder when dividing by 2 (LSB)
        int remainder = decimal % 2;
        
        // Add the remainder to the binary vector
        binary.push_back(remainder);
        
        // Update decimal value by dividing by 2
        decimal /= 2;
    }
    
    // Reverse the binary vector to get the correct binary representation
    reverse(binary.begin(), binary.end());
    
    return binary;
}

// Function to print the binary representation
void printBinary(const vector<int>& binary) {
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    // Convert decimal to binary
    vector<int> binary = decimalToBinary(decimal);
    
    // Print the binary representation
    cout << "Binary representation: ";
    printBinary(binary);
    
    return 0;
}
