#include <iostream>
#include "Base.h"
#include "Vector.h"

Vector::Vector() : size(0), cur(0), head(nullptr) {}

Vector::Vector (int size) : size(size), cur(0) {
    head = new Base * [size];
}

Vector::Vector (const Vector &obj) {
    size = obj.size;
    cur = obj.cur;
    head = obj.head;
}

Vector::~Vector() {
    if (head != nullptr) {
        delete[] head;
        head = nullptr;
    }
}

std::ostream& operator<<(ostream &out, const Vector &obj) {
    if (obj.head == nullptr) {
        cout << "Vector is empty" << endl;
    }

    Base ** ptr = obj.head;
    for (int i = 0; i < obj.cur; i++) {
        (*ptr)->Show();
        ptr++;
    }

    return out;
}

void Vector::Add(Base * obj) {
    if (cur < size) {
        head[cur] = obj;
        cur++;
    }
}