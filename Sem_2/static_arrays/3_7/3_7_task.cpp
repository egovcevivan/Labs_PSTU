#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {-1, -6, 2, 8, -7, 9, 1, 4, -4, 0};
    int max_n = arr[0], min_n = arr[0];

    for (int i = 0; i < Size; i++) {
        if (arr[i] < min_n) {
            min_n = arr[i];
        }
        else if (arr[i] > max_n) {
            max_n = arr[i];
        }
    }

    cout << "Max number: " << max_n << ", min number: " << min_n << endl;

    return 0;
}