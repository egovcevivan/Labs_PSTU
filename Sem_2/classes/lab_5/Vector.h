#pragma once
#include <iostream>
#include "Base.h"

class Vector {
    private:
        int size, cur;
        Base ** head;
    public:
        Vector();
        Vector (int size);
        Vector (const Vector&);
        ~Vector(); 

        friend std::ostream& operator<<(ostream&, const Vector&);

        void Add(Base*);
};