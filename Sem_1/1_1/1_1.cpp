#include <iostream>

int main() {
    int a, b, c, max;
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    std::cout << max << std::endl;
    return 0;

}