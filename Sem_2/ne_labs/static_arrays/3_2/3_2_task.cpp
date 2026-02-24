#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int temp;
    int p, q;

    cout << "Enter p and q: ";
    cin >> p >> q;

    for (int i = 0; i < (q - p + 1) / 2; i++) {
        temp = arr[q - i];
        arr[q - i] = arr[p + i];
        arr[p + i] = temp;
    }

    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}