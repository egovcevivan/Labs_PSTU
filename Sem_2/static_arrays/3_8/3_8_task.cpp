#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int cnt = 0;

    for (int i = 0; i < Size; i++) {
        if (arr[i] % 2 == 0) {
            cnt++;
        }
    }

    int arr_2[Size + cnt];
    int j = 0;

     for (int i = 0; i < Size; i++) {
        arr_2[j++] = arr[i];
    
        if (arr[i] % 2 == 0) {
            arr_2[j++] = -1;
        }
    }

    for (int i = 0; i < Size + cnt; i++) {
        cout << arr_2[i] << " ";
    }
    cout << endl;

    return 0;
}