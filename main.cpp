#include <iostream>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    // Prompt the user to enter the amount of integers to sum
    cout << "Enter the amount of integers to sum: ";
    cin >> k;

    // Check if k is zero
    if (k == 0) {
        cout << "The total sum of 0 integers is: 0" << endl;
        return 0; // Exit the program
    }

    // Loop to get k integers from the user
    do {
        cout << "Enter integer number " << i << ": ";
        cin >> number;
        sum_k += number; // Add the entered number to the sum
        i++; // Increment the counter
    } while (i <= k);

    // Output the total sum
    cout << "The total sum of " << k << " integers is: " << sum_k << endl;

    return 0;
}