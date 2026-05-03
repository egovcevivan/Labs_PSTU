#include <iostream>
#include "MyClass.h"

using namespace std;

MyClass make_MyClass(double a, double b) {
    MyClass F;
    F.Init(a, b);
    return F;
}

int main() {
    cout << "A: " << endl;
    MyClass A;
    A.Init(1.2, 4.5);
    A.Show();

    cout << "B: " << endl;
    MyClass * B = new MyClass;
    cout << A.Root(1.4) << endl;
    B->Read();
    B->Show();
    cout << B->Root(1.0) << endl;
    delete B;

    cout << "C: " << endl;
    MyClass C[2];

    for (int i = 0; i < 2; i++) {
        C[i].Read();
    }

    for(int i = 0; i < 2; i++) {
        C[i].Show();
        cout << C[i].Root(1.5) << endl;
    }

    cout << "D: " << endl;
    MyClass D = make_MyClass(2.4, 1.0);
    D.Show();

    return 0;
}