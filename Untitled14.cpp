#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == arr[mid])
            return mid + 1;
        else if (item > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Find index where temp should be inserted
        int pos = binarySearch(arr, temp, 0, j);

        // Shift elements to make room for temp
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

