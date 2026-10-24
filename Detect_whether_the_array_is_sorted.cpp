#include <iostream>
using namespace std;

bool isSortedAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {10, 35, 20, 50, 40};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Array 1 is " << (isSortedAscending(arr1, n1) ? "Sorted in Ascending Order" : "Not Sorted") << endl;
    cout << "Array 2 is " << (isSortedAscending(arr2, n2) ? "Sorted in Ascending Order" : "Not Sorted") << endl;

    return 0;
}
