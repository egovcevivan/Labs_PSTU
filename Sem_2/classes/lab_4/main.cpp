#include <iostream>
#include "PAIR.h"

using namespace std;

Pair& PairInfo(Pair &obj) {
    cout << "Info: " << obj << endl;
    return obj;
}

void IsPair(Pair *obj) {
    cout << *obj << endl;
}

int main() {
    Pair a(1, 2);
    cout << a << endl;
    PairInfo(a);

    Long b;
    cin >> b;

    Long c = b * b;
    cout << c << endl;
    c = b - c;
    c = c + c;
    cout << c << endl;

    Pair * ptr = new Long(1, 5);
    IsPair(ptr);

    return 0;
}