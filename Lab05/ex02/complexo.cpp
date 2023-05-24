#include "complexo.h"
#include <iostream>
#include <math.h>

using namespace std;

double Complexo::modulo(){
    double m;
    m = sqrt(x*x + i*i);
    return m;
}

double Complexo::angulo(){
    double ang;
    ang = atan2(i,x);
    return ang;
}
bool Complexo::operator>(Complexo& a){
    if((modulo() >= a.modulo())&& angulo() >= a.angulo()){
        return true;
    }
    else{
        return false;
    }
}

bool Complexo::operator==(Complexo& a){
    if((a.modulo() == modulo())&& a.angulo() == angulo()){
        return true;
    }
    else{
        return false;
    }
}

ostream& operator<<(ostream& out, const Complexo& a){
    out << a.x << " " << a.i;
    return out;
}

istream& operator>>(istream& in, Complexo& a){
    in >> a.x >> a.i;
    return in;
}
