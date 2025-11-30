#include <iostream>

using namespace std;

int main() {

    int a, b, c, max;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    cout << max << endl;

    return 0;
}