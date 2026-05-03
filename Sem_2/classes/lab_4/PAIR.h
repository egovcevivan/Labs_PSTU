#pragma once
#include <iostream>

using namespace std;

class Pair {
    protected:
        int fst;
        int snd;

    public:
        Pair();
        Pair(int, int);
        Pair(const Pair&);
        virtual ~Pair();

        void SetFst(int);
        void SetSnd(int);
        int GetFst() const;
        int GetSnd() const;

        friend istream& operator>>(istream&, Pair&);
        friend ostream& operator<<(ostream&, Pair&);

        Pair operator+(Pair&);
        Pair& operator=(const Pair&);
};

class Long : public Pair {
    private:
        int base = 10000;
    
    public:
        Long();
        Long(int, int);
        Long(const Long&);
        ~Long(); 

        void SetSnd(int a);

        friend istream& operator>>(istream&, Long&);
        friend ostream& operator<<(ostream&, Long&);

        Long operator+(Long&);
        Long operator-(Long&);
        Long operator*(Long&);
        Long& operator=(const Long&);
};