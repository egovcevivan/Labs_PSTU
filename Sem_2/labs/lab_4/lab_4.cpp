#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int Size = 10;
    int arr[Size];
    int arr_2[Size - 1];
    int arr_3[Size];
    int range_max = 100;

    for (int i = 0; i < Size; i++) {
        arr[i] = ((double)rand() / RAND_MAX) * range_max;
        cout << arr[i] << " ";
    }
    cout << endl;

    int k, j = 0;

    cout << "Enter k: ";
    cin >> k; 
    
    for (int i = 0; i < Size; i++) {
        if ((i + 1) != k) {
            arr_2[j++] = arr[i];
        }
    }

    j = 0;
    int i = 0;
    bool is_inserted = false;

    while (i < Size) {
        arr_3[j++] = arr_2[i];
        if ((arr_2[i] % 2 == 0) && !is_inserted) {
            arr_3[j++] = arr_2[i - 1] + 2;
            is_inserted = true;
        }
        i++;
    }

    for (int i = 0; i < Size; i++) {
        cout << arr_3[i] << " ";
    }

    cout << endl;

    return 0;
}