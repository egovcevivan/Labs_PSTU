#include <iostream>

using namespace std;

int main() {
    int n, a, min, max = 0;

    cin >> n >> min;
    max = min;

    for (int i = 2; i <= n; i++) {

        cin >> a;

        if (a < min) {
            min = a;
        }
        else if (a > max) {
            max = a;
        }
    }

    cout << "MIN: " << min << ", MAX: " << max << endl;

    return 0;
}