#include <iostream>

using namespace std;

int main() {
    int n, i = 1, sum = 0;
    bool sign = true;

    cin >> n;

    while (i <= n) {
        if (sign == true) {
            sum -= i;
            sign = false;
        }
        else {
            sum += i;
            sign = true;
        }
        i++;
    }
    cout << "SUM: " << sum << endl;

    return 0;
}