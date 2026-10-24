#include <iostream>
using namespace std;

class Sorting {
public:
    // ১. Bubble Sort (পাশাপাশি দুটি উপাদানের তুলনা করে বড় উপাদানকে ডানে পাঠানো হয়)
    void bubbleSort(int data[], int dataSize) {
        for (int j = 0; j < dataSize - 1; j++) {
            bool swapped = false;
            for (int i = 0; i < dataSize - 1 - j; i++) {
                if (data[i] > data[i + 1]) {
                    int t = data[i];
                    data[i] = data[i + 1];
                    data[i + 1] = t;
                    swapped = true;
                }
            }
            // যদি কোনো অদলবদল না ঘটে, তাহলে অ্যারে ইতোমধ্যে সর্টেড
            if (!swapped) break;
        }
    }

    // ২. Selection Sort (প্রতি পাসে ক্ষুদ্রতম উপাদানটি খুঁজে এনে শুরুতে বসানো হয়)
    void selectionSort(int data[], int dataSize) {
        for (int j = 0; j < dataSize - 1; j++) {
            int mi = j; // বর্তমান ক্ষুদ্রতম ইনডেক্স
            for (int i = j + 1; i < dataSize; i++) {
                if (data[i] < data[mi]) {
                    mi = i;
                }
            }
            // ক্ষুদ্রতম উপাদানের সাথে j-তম উপাদানের সোয়াপ
            int t = data[j];
            data[j] = data[mi];
            data[mi] = t;
        }
    }

    // ৩. Insertion Sort (কার্ড খেলার মতো প্রতিটি উপাদান সঠিক পজিশনে ইনসার্ট করা হয়)
    void insertionSort(int data[], int dataSize) {
        for (int i = 1; i < dataSize; i++) {
            int key = data[i];
            int j = i - 1;
            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = key;
        }
    }

    // প্রিন্ট করার হেল্পার ফাংশন
    void printArray(int data[], int dataSize) {
        for (int i = 0; i < dataSize; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Sorting s;

    // Bubble Sort টেস্ট
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original Array 1: ";
    s.printArray(arr1, n1);

    s.bubbleSort(arr1, n1);
    cout << "After Bubble Sort: ";
    s.printArray(arr1, n1);

    cout << "\n----------------------------------------\n";

    // Selection Sort টেস্ট
    int arr2[] = {29, 10, 14, 37, 13};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Original Array 2: ";
    s.printArray(arr2, n2);

    s.selectionSort(arr2, n2);
    cout << "After Selection Sort: ";
    s.printArray(arr2, n2);

    cout << "\n----------------------------------------\n";

    // Insertion Sort টেস্ট
    int arr3[] = {5, 2, 8, 1, 9};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Original Array 3: ";
    s.printArray(arr3, n3);

    s.insertionSort(arr3, n3);
    cout << "After Insertion Sort: ";
    s.printArray(arr3, n3);

    return 0;
}
