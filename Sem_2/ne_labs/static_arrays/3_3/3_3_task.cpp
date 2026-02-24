#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {0, 1, 7, 3, 7, 1, 6, 7, 2, 0};
    int max_n = arr[0];
    int cnt_n = 0;

    for (int i = 0; i < Size; i++) {
        if (arr[i] > max_n) {
            max_n = arr[i];
            cnt_n = 1;
        }
        else if (arr[i] == max_n) {
            cnt_n++;
        }
    }

    cout << "Max number: " << max_n << ", count: " << cnt_n << endl;

    return 0;
}