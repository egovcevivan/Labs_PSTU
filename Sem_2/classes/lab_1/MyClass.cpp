#include <iostream>
#include "MyClass.h"

using namespace std;

void MyClass::Init(double a, double b) {
    if (a != 0) {
        fst = a;
        snd = b;
    }
    else {
        cout << "Error!" << endl;
    }
}

void MyClass::Read() {
    double a, b;
    cout << "Fst: ";
    cin >> a;
    cout << "Snd: ";
    cin >> b;

    Init(a, b);
}

void MyClass::Show() {
    cout << "First: " << fst << ", second: " << snd << endl;
}

double MyClass::Root(double y) {
    return (y - snd) / fst;
}

