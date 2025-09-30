/*
Mishree Kalaria
24070123052
Batch:A2
*/

#include <iostream>
using namespace std;

int main() {
    int n, key;
    
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Sequential Search
    int index = -1; // default -1 means not found
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Element " << key << " found at position " << index + 1 << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}


/*
Enter number of elements: 5
Enter 5 elements: 34 78 12 55 99
Enter the element to search: 12
Element 12 found at position 3

Enter number of elements: 5
Enter 5 elements: 34 78 12 55 99
Enter the element to search: 82
Element 82 not found in the array.
*/
