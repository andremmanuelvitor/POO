#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <iostream>
using namespace std;

class Complexo{
    private:
        double x, i;

    public:
        double modulo();
        double angulo();

        bool operator >(Complexo& a);
        bool operator ==(Complexo& a);

        friend ostream& operator<<(ostream& out, const Complexo& a);
        friend istream& operator>>(istream& in, Complexo& a);
};

#endif
