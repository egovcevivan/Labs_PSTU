#include <iostream>

using namespace std;

int main() {
    const int Size = 3;
    int arr[Size][Size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            if (i + j == Size - 1) {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << arr[i][j] << " ";
        }
        cout  << endl;
    }

    return 0;
}