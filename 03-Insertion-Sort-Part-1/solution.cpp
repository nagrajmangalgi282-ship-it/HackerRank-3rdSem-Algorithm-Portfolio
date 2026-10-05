#include <iostream>
#include <vector>
using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int value = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;

        i--;
    }

    arr[i + 1] = value;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort1(n, arr);

    return 0;
}