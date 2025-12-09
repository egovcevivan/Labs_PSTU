#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    float * ptr_a, * ptr_b, * ptr_c;
    ptr_a = &a;
    ptr_b = &b;

    cout << "Enter a and b:" << endl;
    cin >> a >> b;

    *ptr_c = a; 

    *ptr_a = *ptr_b;
    *ptr_b = *ptr_c;

    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}