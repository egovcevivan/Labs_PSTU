#include <iostream>
#include "Base.h"
#include "Pair.h"
#include "Long.h"
#include "Vector.h"

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
    Long b;
    cin >> b;

    Base * ptr = &a;

    Vector vect(5);
    vect.Add(ptr);

    ptr = &b;
    
    vect.Add(ptr);
    cout << vect << endl;

    return 0;
}