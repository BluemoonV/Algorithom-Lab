#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 22, 5, 75, 65, 80, 30, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 75;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

