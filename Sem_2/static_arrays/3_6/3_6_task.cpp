#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k, temp;

    cout << "Enter k: ";
    cin >> k;

    for (int i = 0; i < k; i++) {
        temp = arr[0];

        for (int j = 0; j < Size - 1; j++) { 
            arr[j] = arr[j + 1];
        }

        arr[Size - 1] = temp;
    }

    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}