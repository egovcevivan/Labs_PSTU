#pragma once
#include <iostream>
#include "Pair.h"

class Long : public Pair {
    private:
        int base = 10000;
    
    public:
        Long();
        Long(int, int);
        Long(const Long&);
        ~Long(); 
        
        void Show() override;

        void SetSnd(int a);

        friend istream& operator>>(istream&, Long&);
        friend ostream& operator<<(ostream&, Long&);

        Long operator+(Long&);
        Long operator-(Long&);
        Long operator*(Long&);
        Long& operator=(const Long&);
};