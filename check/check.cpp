#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

/**
 * @brief Implements the Binary Search algorithm (Chapter 3).
 *
 * Binary search efficiently finds the position of a target value within a
 * sorted array by repeatedly dividing the search interval in half.
 *
 * @param arr The sorted vector of integers to search through.
 * @param target The integer value to search for.
 * @return The index of the target element if found; otherwise, returns -1.
 */
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Calculate the middle index, ensuring no overflow
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half (upper boundary)
        } else {
            high = mid - 1; // Target is in the left half (lower boundary)
        }
    }
    // Target not found
    return -1;
}

/**
 * @brief Implements the Bubble Sort algorithm (Chapter 3).
 *
 * Bubble sort repeatedly steps through the list, compares adjacent elements,
 * and swaps them if they are in the wrong order. The pass through the list is
 * repeated until the list is sorted.
 *
 * @param arr The vector of integers to be sorted (passed by reference).
 */
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    // Outer loop controls the number of passes.
    // The largest i elements are already in place after i passes.
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        // Inner loop performs the comparisons and swaps.
        // It runs up to (n - 1 - i) because the last i elements are already sorted.
        for (int j = 0; j < n - 1 - i; ++j) {
            // Compare adjacent elements.
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order.
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Optimization: If no two elements were swapped by inner loop, then the array is sorted.
        if (swapped == false) {
            break;
        }
    }
}

/**
 * @brief Utility function to print the elements of a vector.
 */
void printVector(const std::vector<int>& arr) {
    std::cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i < arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

int main() {
    // --- Demonstration of Bubble Sort (Algorithm 1) ---
    std::vector<int> numbers = {5, 1, 4, 2, 8, 3};
    std::cout << "--- Algorithm 1: Bubble Sort ---" << std::endl;
    std::cout << "Original array: ";
    printVector(numbers);
    std::cout << std::endl;

    // Sort the array using Bubble Sort
    bubbleSort(numbers);

    std::cout << "Sorted array:   ";
    printVector(numbers);
    std::cout << std::endl << std::endl;


    // --- Demonstration of Binary Search (Algorithm 2) ---
    // Note: Binary Search requires a sorted array, which we ensured above.
    std::cout << "--- Algorithm 2: Binary Search ---" << std::endl;
    const std::vector<int>& sorted_numbers = numbers;

    int target1 = 4;
    int index1 = binarySearch(sorted_numbers, target1);

    std::cout << "Searching for " << target1 << " in sorted array: ";
    printVector(sorted_numbers);
    std::cout << std::endl;

    if (index1 != -1) {
        std::cout << "Found " << target1 << " at index " << index1 << "." << std::endl;
    } else {
        std::cout << target1 << " not found." << std::endl;
    }

    int target2 = 10;
    int index2 = binarySearch(sorted_numbers, target2);

    std::cout << "Searching for " << target2 << " in sorted array: ";
    printVector(sorted_numbers);
    std::cout << std::endl;

    if (index2 != -1) {
        std::cout << "Found " << target2 << " at index " << index2 << "." << std::endl;
    } else {
        std::cout << target2 << " not found." << std::endl;
    }

    return 0;
}