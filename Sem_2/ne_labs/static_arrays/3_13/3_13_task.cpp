#include <iostream>

using namespace std;

int main() {
    const int Size = 3;
    int arr[Size][Size] = {
        {3, 0, 1},
        {6, 1, 6},
        {7, 8, 4}
    };

    int l;

    cout << "Enter index of line: ";
    cin >> l;

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < Size - 1; i++) {
        for (int j = 0; j < Size - 1 - i; j++) {
            int temp = 0;
            
            if (arr[l][j] > arr[l][j + 1]) {
                for (int k = 0; k < Size; k++) {
                    temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}