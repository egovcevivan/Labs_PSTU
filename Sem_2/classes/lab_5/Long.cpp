#include <iostream>
#include "Base.h"
#include "Pair.h"
#include "Long.h"

Long::Long() : Pair(0, 0) {}
Long::Long(int fst, int snd) : Pair(fst, snd) {
    SetSnd(snd);
}

Long::Long(const Long &obj) : Pair(obj) {}

void Long::Show() {
    std::cout << "HDword: " << fst << std::endl;
    std::cout << "SDword: " << snd << std::endl;
}

Long::~Long() {}

void Long::SetSnd(int a) {
    if (a < 0) {
        int temp = (a - base + 1) / base;
        fst += temp;
        snd -= temp * base;
    }
    else if (a >= base) {
        fst += a / base;
        snd %= base;
    }
    else {
        snd = a;
    }
}

std::istream& operator>>(std::istream &in, Long &obj) {
    int temp;
    std::cout << "High Dword: ";
    std::cin >> temp;
    obj.SetFst(temp);
    std::cout << "Low Dword: ";
    std::cin >> temp;
    obj.SetSnd(temp);

    return in;
}

std::ostream& operator<<(std::ostream &out, Long &obj) {
    std::cout << obj.GetFst() << ", " << obj.GetSnd() << std::endl;

    return out;
}

Long Long::operator+(Long &other) {
    Long res;

    res.SetFst(fst + other.fst);
    res.SetSnd(snd + other.snd);

    return res;
}

Long Long::operator-(Long &other) {
    Long res;
    
    res.SetFst(fst - other.fst);
    res.SetSnd(snd - other.snd);

    return res;
}

Long Long::operator*(Long &other) {
    Long res;
    long long fst_1 = this->fst, snd_1 = this->snd;
    long long fst_2 = other.fst, snd_2 = other.snd;
    long long res_num = 0;

    res_num = (fst_1 * base + snd_1) * (fst_2 * base + snd_2);
    res.SetFst(res_num / base);
    res.SetSnd(res_num % base);

    return res;
}

Long& Long::operator=(const Long &obj) {
    if (&obj == this) {
        return *this;
    }
    fst = obj.fst;
    snd = obj.snd;

    return *this;
}