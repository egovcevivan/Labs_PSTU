#pragma once
#include <iostream>
#include "Base.h"

class Pair : public Base {
    protected:
        int fst;
        int snd;

    public:
        Pair();
        Pair(int, int);
        Pair(const Pair&);
        virtual ~Pair();

        void Show() override;

        void SetFst(int);
        void SetSnd(int);
        int GetFst() const;
        int GetSnd() const;

        friend std::istream& operator>>(std::istream&, Pair&);
        friend std::ostream& operator<<(std::ostream&, Pair&);

        Pair operator+(Pair&);
        Pair& operator=(const Pair&);
};