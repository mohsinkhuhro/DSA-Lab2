#include <iostream>
#include <cassert>
using namespace std;

// Function Prototype
bool isSorted(const int arr[], const int size);


// Test Case 1: Standard ascending sorted array
void testSortedArray() {
    int arr[] = { 1, 2, 3, 4, 5 };
    assert(isSorted(arr, 5) == true);
}

// Test Case 2: Unsorted array
void testUnsortedArray() {
    int arr[] = { 1, 4, 3, 5, 6 };
    assert(isSorted(arr, 5) == false);
}

// Test Case 3: Sorted array containing duplicate values
void testDuplicateValues() {
    int arr[] = { 1, 2, 2, 3, 5 };
    assert(isSorted(arr, 5) == true);
}

// Test Case 4: Single element array
void testSingleElement() {
    int arr[] = { 42 };
    assert(isSorted(arr, 1) == true);
}

// Test Case 5: Array sorted in descending order
void testDescendingArray() {
    int arr[] = { 5, 4, 3, 2, 1 };
    assert(isSorted(arr, 5) == false);
}

// Test Case 6: Array containing negative values
void testNegativeValues() {
    int arr[] = { -10, -5, -2, 0, 3 };
    assert(isSorted(arr, 5) == true);
}

// Test Case 7 (Custom Edge Case 1): All elements are identical
void testAllIdenticalElements() {
    int arr[] = { 7, 7, 7, 7 };
    assert(isSorted(arr, 4) == true);
}

// Test Case 8 (Custom Edge Case 2): Empty array
void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}

bool isSorted(const int arr[], const int size) {
    // Base Case: Empty array or single element is inherently sorted
    if (size <= 1) {
        return true;
    }

    // Traverse array and compare neighboring elements
    for (int i = 0; i < size - 1; i++) {
        // If a left element is strictly greater than its right neighbor, it is unsorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}


int main() {
    cout << "Executing TDD Unit Tests..." << endl;

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllIdenticalElements();
    testEmptyArray();

    cout << "Success: All 8 TDD test cases passed!" << endl;
    return 0;
}