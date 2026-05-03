#pragma once
#include <string>

using namespace std;

class Country {
    string Capital;
    int Population;
    double Area;

    public:
        Country();
        Country(string, int, double);
        Country(const Country&);
        ~Country();

        void SetCapital(string);
        void SetPopulation(int);
        void SetArea(double);

        string GetCapital() const;
        int GetPopulation() const;
        double GetArea() const;

        void Show();
};