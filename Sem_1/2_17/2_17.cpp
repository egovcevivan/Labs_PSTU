#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float n, x, sum = 0;

    cin >> n >> x;

    for (int i = 0; i <= n; i++) {
        int f = 1;
        
        for (int j = 1; j <= i; j++) {
            f *= j;
        }

        sum += pow(x, i) / f;
    }

    cout << "SUM: " << sum << endl;

    return 0;
}
