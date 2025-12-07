#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num = 1;
    float n, max, a;

    cin >> n;
    max = sinf(1 + (1 / n));

    for (int i = 2; i <= n; i++) {
        a = sinf(i + (i / n));
        cout << a << endl;
        if (a > max) {
            max = a;
            num = i;
        }
    }
    cout << "Max: " << max << " Num: " << num << endl;

    return 0;
}