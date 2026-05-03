#include <iostream>
#include "MyClass.h"

using namespace std;

void PrintCountry(Country A) {
    A.Show();
}

int main() {
    Country A;
    PrintCountry(A);

    Country B = A;
    B.Show();
    B.SetCapital("London");
    B.SetPopulation(1000);
    B.SetArea(10234.34);
    B.Show();

    Country C("Moskow", 146000, 17000000);
    cout << C.GetCapital() << endl;
    cout << C.GetPopulation() << endl;
    cout << C.GetArea() << endl;


    return 0;
}