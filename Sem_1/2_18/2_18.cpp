#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, c_n, v_n = 0, p = 0;

    cin >> n;

    c_n = n;

    while (c_n > 0) {
        p += 1;
        c_n /= 10;
    }

    for (int i = p - 1; i >= 0; i--) {
        v_n += n % 10 * pow(10, i);
        n /= 10;
    }
    cout << "Reverto! " << v_n << endl;

    return 0;
}