#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int n, vector<int>& v) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int BinarySearch(vector<int>& v, int n, int val) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (v[mid] == val)
            return mid;
        else if (v[mid] < val)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return l;
}

int main() {
    int n, val;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter a value to search: ";
    cin >> val;

    BubbleSort(n, v);
    int index = BinarySearch(v, n, val);

    cout << "Sorted vector: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    if (index < n && v[index] == val) {
        cout << "Value " << val << " found at index: " << index << endl;
    } else {
        cout << "Value " << val << " can be inserted at index: " << index << " to maintain sorted order" << endl;
    }

    return 0;
}
