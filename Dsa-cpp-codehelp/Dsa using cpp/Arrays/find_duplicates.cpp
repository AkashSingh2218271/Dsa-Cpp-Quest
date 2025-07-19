#include <iostream>
using namespace std;

//  int duplicate(int *arr, int n) {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     for (int i = 1; i < n; i++) {
//         ans = ans ^ i;
//     }
//     return ans;
// }
// void inputArray(int *arr, int n) {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }

// int main() {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter element in array : ";
//     inputArray(arr, n);
//     cout << "Duplicate element in array is " << duplicate(arr, n) << endl;
//     return 0;
// }
/*
This program finds a duplicate element in an array where:
- Array contains numbers from 1 to n-1
- One number is repeated once
- Array size is n

The solution uses XOR operation properties:
1. XOR of a number with itself is 0 (a ^ a = 0)
2. XOR of a number with 0 is the number itself (a ^ 0 = a)
3. XOR is associative and commutative
*/

// Function to find duplicate element using XOR operations
int duplicate(int *arr, int n) {
    int ans = 0;
    
    // Step 1: XOR all array elements
    // This will cancel out pairs of same numbers (except duplicate)
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    
    // Step 2: XOR with numbers 1 to n-1
    // This cancels out non-duplicate numbers, leaving only duplicate
    for (int i = 1; i < n; i++) {
        ans = ans ^ i;
    }
    return ans;
}

// Function to take array input from user
void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Main function to execute the program
int main() {
    // Declare variable to store array size
    int n;
    
    // Prompt user to enter array size
    cout << "Enter size of array : ";
    
    // Read array size from user input
    cin >> n;
    
    // Declare array of size n
    int arr[n];
    
    // Prompt user to enter array elements
    cout << "Enter element in array : ";
    
    // Call function to input array elements
    inputArray(arr, n);

    // Call duplicate function and print the result
    cout << "Duplicate element in array is " << duplicate(arr, n) << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
