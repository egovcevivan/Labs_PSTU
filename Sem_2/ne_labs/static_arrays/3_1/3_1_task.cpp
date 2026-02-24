#include <iostream>

using namespace std;

int main() {
    const int Size = 9;
    int arr[Size] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int temp;
    
    for (int i = 0; i < Size / 2; i++) {
        temp = arr[Size - 1 - i];
        arr[Size - 1 - i] = arr[i];
        arr[i] = temp;
    }
    
    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}