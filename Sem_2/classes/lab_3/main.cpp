#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money A(100, 57);
    Money B = 100.55 + A;
    cout << B << endl;
    Money C;
    cin >> C;
    Money D = A - C;
    cout << D << endl;;

    return 0;
}