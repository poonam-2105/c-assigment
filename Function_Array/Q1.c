// Q1)=Write a program to find out the max number from given array using 
// function
#include <stdio.h>

// Function to find the maximum number in an array

int maxnum(int arr[], int size) {
    int  max = arr[0]; // Assume the first element as the maximum
    
    // Loop through the array to find the maximum
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    
    return max; // Return the maximum number
}

int main() {
    int max;
    int size=5;
    int arr[size];
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

     max = maxnum(arr, size);
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
