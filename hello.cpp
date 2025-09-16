#include <iostream>
using namespace std;
void findIndices(int arr[], int n, int key) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "No indices found";
    }
    cout << endl;
}

int main() {
    // Test case 1: Multiple occurrences
    int arr1[] = { 1, 3, 5, 3, 7, 3, 9 };
    cout << "Test 1: ";
    findIndices(arr1, 7, 3);

    // Test case 2: Key not present
    int arr2[] = { 10, 20, 30, 40, 50 };
    cout << "Test 2: ";
    findIndices(arr2, 5, 25);

    // Test case 3: Empty array
    int arr3[] = {0};
    cout << "Test 3: ";
    findIndices(arr3, 0, 5);

    return 0;
}
