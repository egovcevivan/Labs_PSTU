#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {-11, -1, -2, -3, -4, -5, -6, -7, -8, -90};
    int max_n = arr[0];

    for (int i = 0; i < Size; i++) {
        if (arr[i] > max_n) {
            max_n = arr[i];
        }
    }

    cout << "Max number: " << max_n << endl;

    return 0;
}