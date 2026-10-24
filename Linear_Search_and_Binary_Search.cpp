#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {12, 24, 36, 48, 60, 72, 84};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int key = 48;
    cout << "Linear Search for " << key << ": Index " << linearSearch(arr, n, key) << endl;
    cout << "Binary Search for " << key << ": Index " << binarySearch(arr, n, key) << endl;

    int missing = 99;
    cout << "Binary Search for " << missing << ": Index " << binarySearch(arr, n, missing) << " (Not found)" << endl;

    return 0;
}
