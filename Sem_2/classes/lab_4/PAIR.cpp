#include <iostream>
#include "Pair.h"

using namespace std;

Pair::Pair() : fst(0), snd(0) {}
Pair::Pair(int a, int b) : fst(a), snd(b) {}
Pair::Pair(const Pair &obj) {
    fst = obj.fst;
    snd = obj.fst;
}
Pair::~Pair() {}

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

istream& operator>>(istream &in, Pair &obj) {
    cout << "First num: ";
    cin >> obj.fst;
    cout << "Secnd num: ";
    cin >> obj.snd;
    return in;
}

ostream& operator<<(ostream &out, Pair &obj) {
    cout << "First: " << obj.fst << endl;
    cout << "Second: " << obj.snd << endl;
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

Long::Long() : Pair(0, 0) {}
Long::Long(int fst, int snd) : Pair(fst, snd) {
    SetSnd(snd);
}

Long::Long(const Long &obj) : Pair(obj) {}

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

istream& operator>>(istream &in, Long &obj) {
    int temp;
    cout << "High Dword: ";
    cin >> temp;
    obj.SetFst(temp);
    cout << "Low Dword: ";
    cin >> temp;
    obj.SetSnd(temp);

    return in;
}

ostream& operator<<(ostream &out, Long &obj) {
    cout << obj.GetFst() << ", " << obj.GetSnd() << endl;

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