#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the integer n

    int steps = 0; // Initialize the steps count to 0

    // While n is not equal to 0
    while (n > 0) {
        // Convert n to a string to iterate through its digits
        string n_str = to_string(n);

        // Find the maximum digit in n_str (as you want to subtract the maximum digit)
        char max_digit = '0';
        for (char digit : n_str) {
            if (digit > max_digit) {
                max_digit = digit;
            }
        }

        // Subtract the max_digit from n
        n -= (max_digit - '0');

        // Increment the steps count
        steps++;
    }

    // Output the minimum number of steps
    cout << steps << endl;

    return 0;
}
