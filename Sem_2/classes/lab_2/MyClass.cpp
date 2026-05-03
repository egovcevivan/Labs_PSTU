#include <iostream>
#include <string>
#include "MyClass.h"

using namespace std;

Country::Country() : Capital("Plug"), Population(0), Area(0.0) {
    cout << "Constructor without parameters" << endl;
}

Country::Country(string capital, int population, double area) : Capital(capital), Population(population), Area(area) {
    cout << "Constructor with parameters" << endl;
}

Country::Country(const Country &other) {
    Capital = other.Capital;
    Population = other.Population;
    Area = other.Area;

    cout << "Copy constructor" << endl;
}

Country::~Country() {
    cout << "Destructor" << endl;
}

void Country::SetCapital(string capital) {
    Capital = capital;
}

void Country::SetPopulation(int population) {
    if (population >= 0) {
        Population = population;
    }
    else {
        cout << "Error! Population < 0!" << endl;
    }
}

void Country::SetArea(double area) {
    if (area > 0) {
        Area = area;
    }
    else {
        cout << "Error! Area <= 0!" << endl;
    }
}

string Country::GetCapital() const {
    return Capital;
}

int Country::GetPopulation() const {
    return Population;
}

double Country::GetArea() const {
    return Area;
}

void Country::Show() {
    cout << Capital << endl;
    cout << Population << endl;
    cout << Area << endl;
}