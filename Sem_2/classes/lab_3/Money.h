#pragma once
#include <iostream>

using namespace std;

class Money {
    long Rubles;
    int Pennies;

    public:
        Money();
        Money(long, int);
        Money(const Money&);
        ~Money();

        Money& operator=(const Money&);

        Money operator+(const Money&);
        friend Money operator+(const Money&, double);
        friend Money operator+(double, const Money&);

        Money operator-(const Money&);
        friend Money operator-(const Money&, double);
        friend double operator-(double, const Money&);

        friend istream& operator>>(istream&, Money&);
        friend ostream& operator<<(ostream&, Money&);

        void SetRubles(long);
        void SetPennies(int);

        long GetRubles() const;
        int GetPennies() const;

        void Balance();
};