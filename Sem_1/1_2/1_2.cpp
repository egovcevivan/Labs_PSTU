#include <iostream>

int main() {
    float a, b;
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "На 0 делить нельзя!" << std::endl;
    }
    else {
        std::cout << a / b << std::endl;
    }

    return 0;
}