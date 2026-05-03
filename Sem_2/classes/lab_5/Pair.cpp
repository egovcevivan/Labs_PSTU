#include <iostream>
#include "Pair.h"

Pair::Pair() : fst(0), snd(0) {}
Pair::Pair(int a, int b) : fst(a), snd(b) {}
Pair::Pair(const Pair &obj) {
    fst = obj.fst;
    snd = obj.fst;
}
Pair::~Pair() {}

void Pair::Show() {
    std::cout << "Fst: " << fst << std::endl;
    std::cout << "Snd: " << snd << std::endl;
}

void Pair::SetFst(int a) {
    fst = a;
}

void Pair::SetSnd(int a) {
    snd = a;
}

int Pair::GetFst() const {
    return fst;
}

int Pair::GetSnd() const {
    return snd;
}

std::istream& operator>>(std::istream &in, Pair &obj) {
    std::cout << "First num: ";
    std::cin >> obj.fst;
    std::cout << "Secnd num: ";
    std::cin >> obj.snd;
    return in;
}

std::ostream& operator<<(std::ostream &out, Pair &obj) {
    std::cout << "First: " << obj.fst << std::endl;
    std::cout << "Second: " << obj.snd << std::endl;
    return out;
}

Pair Pair::operator+(Pair &obj) {
    Pair res;
    res.SetFst(fst + obj.fst);
    res.SetSnd(snd + obj.snd);

    return res;
}

Pair& Pair::operator=(const Pair &obj) {
    if (&obj == this) {
        return *this;
    }
    fst = obj.fst;
    snd = obj.snd;

    return *this;
}