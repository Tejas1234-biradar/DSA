// #include<iostream>
// using namespace std;

// int main() {
//     // int arr[] = {12, 13, 14, 42, 30, 2}; // Declare and initialize the array

//     // int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

//     // int max = arr[0]; // Optional: store the first element as max (not used here effectively)
//     // cout << max << endl; // Output the first element

//     // Outer loop: runs size - 1 times
//     // for (int i = 0; i < size - 1; i++) {

//         // Inner loop: compares adjacent elements and pushes the larger towards the end
//         // for (int j = 0; j < (size - i - 1); j++) {

//             // If current element is less than the next one, swap them (for descending order)
//             // if (arr[j] < arr[j + 1]) {
//                 // swap(arr[j], arr[j + 1]);
//             // }
//         // }
//     // }

//     // After sorting, print the array
//     // for (auto val : arr) {
//         // cout << val << " ";
//     // }

//     // return 0; // End the program
// }

#include<iostream>
using namespace std;

int main() {
    int arr[] = {12, 13, 14, 42, 30, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = size - 1; i >= 1; i--) {   // Reverse outer loop
        for (int j = 0; j <= i - 1; j++) {  // Inner loop runs till i-1
            if (arr[j] < arr[j + 1]) {      // Descending order
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Print sorted array
    for (auto val : arr) {
        cout << val << " ";
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int arr[] = {12, 13, 14, 42, 30, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool swapped;

    for (int i = size - 1; i >= 1; i--) {
        swapped = false; // Reset flag for each outer loop iteration
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // We made a swap, so array wasn’t sorted yet
            }
        }
        if (!swapped) {
            // No swaps were made in this pass, array is sorted!
            break;
        }
    }

    // Print sorted array
    for (auto val : arr) {
        cout << val << " ";
    }

    return 0;
}

