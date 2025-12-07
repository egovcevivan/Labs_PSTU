#include <iostream>

using namespace std;

int main() {
    int n, max, a;

    cin >> n >> max;

    if (n > 0) {
        for (int i = 2; i <= n; i++) {

        cin >> a;

        if ( max < a ) { max = a; }
    }

    cout << max << endl;
    }
    else {
        cout << "N <= 0" << endl;
    }

    return 0;
}