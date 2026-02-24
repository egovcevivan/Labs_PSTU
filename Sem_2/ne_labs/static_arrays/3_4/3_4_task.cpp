#include <iostream>

using namespace std;

int main() {
    const int Size = 10;
    int arr[Size] = {9, 10, 12, 15, 110, 120, 200, 290, 600, 700};
    bool is_sorted = true;
    int i = 0;

    while (i < Size) {
        if (arr[i] > arr[i + 1]) {
            is_sorted = false;
            cout << "List isn`t sorted!" << endl;
            break;
        }
        i++;
    }

    if (is_sorted) {
        cout << "List is sorted!" << endl;
    }

    return 0;
}