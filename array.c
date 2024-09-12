// Algorithm max_no

// Input: An array A with size n
// Output: The maximum element in the array

// 1. If n <= 0 then
//     1.1. Print "Array is empty" or handle error
//     1.2. Return None

// 2. Initialize max to A[0]

// 3. For i from 1 to n - 1 do
//     3.1. If A[i] > max then
//         3.1.1. Set max to A[i]

// 4. Return max




#include <stdio.h>

int max_no(int arr[], int size) {
    // Assume the first element is the maximum
    int max = arr[0];
    
    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update max if the current element is greater
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr[] = {31, 52, 17, 12, 68, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = max_no(arr, size);
    
    printf("The maximum element is: %d\n", max);
    
    return 0;
}
