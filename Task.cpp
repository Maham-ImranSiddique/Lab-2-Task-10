#include <iostream>
using namespace std;
const int CAPACITY = 10;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
}

int insertSorted(int arr[], int n, int value) {
    if (n == CAPACITY) {
        cout << "Array is full\n";
        return n;
    }

    int j = n - 1;

    while (j >= 0 && arr[j] > value) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = value;
    return n + 1;
}

int main() {
    int arr[CAPACITY] = {10, 20, 30, 50, 60};
    int n = 5;

    cout << "Start: ";
    display(arr, n);

    n = insertSorted(arr, n, 40);
    cout << "Insert 40: ";
    display(arr, n);

    n = insertSorted(arr, n, 5);
    cout << "Insert 5: ";
    display(arr, n);

    n = insertSorted(arr, n, 70);
    cout << "Insert 70: ";
    display(arr, n);

    return 0;
}
