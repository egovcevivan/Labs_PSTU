#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float n, s, a;

    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        a = sinf((n + (i / n)));
        if (abs(a - s) < 0.0001) {
            cout << "S in!" << endl;
            break;
        }
    }
    return 0;
}