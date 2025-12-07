#include <iostream>

using namespace std;

int main() {
    int n, s;
    bool flag = false;

    cin >> n >> s;

    while (n > 0) {
        if (s == n % 10) {
            flag = true;
            break;
        }
        n /= 10;
    }
    if (flag == true) {
        cout << "S in N!" << endl;
    }
    else {
        cout << "S not in N!" << endl;
    }

    return 0;
}