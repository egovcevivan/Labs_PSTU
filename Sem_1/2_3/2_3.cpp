#include <iostream>

using namespace std;

int main() {
    int n;
    int proizv, sum = 0;
   
    cin >> n;

    if (n <= 0) {
        cout << "Невозможно посчитать сумму, так как N <= 0" << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            proizv = 1;

            for (int j = i; j <= 2 * i; j++) {
                proizv *= j;
            }
            
            sum += proizv;
        }

        cout << sum << endl;
    }

    return 0;
}