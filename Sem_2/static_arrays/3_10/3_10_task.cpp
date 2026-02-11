#include <iostream>

using namespace std;

int main() {
    const int Size = 3;
    int arr[Size][Size] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int tr_arr[Size][Size];

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            tr_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << tr_arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}