#include <iostream>

using namespace std;

int f_nums(unsigned int n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return f_nums(n - 1) + f_nums(n - 2);
    }
}

int main() {
    unsigned num;

    cin >> num;
    cout << f_nums(num) << endl;

   return 0;
}