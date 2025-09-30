/*
Mishree Kalaria
24070123052
Batch:A2
*/
#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int array[5] = {44, 12, 67, 90, 23};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;

    return 0;
}

/*
Sorted array: 12	23	44	67	90
*/
