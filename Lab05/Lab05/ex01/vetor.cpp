#include "vetor.h"
#include <iostream>

using namespace std;

Vector3D::Vector3D(int i, int j, int k){
    x= i;
    y= j;
    z= k;
}

Vector3D Vector3D:: operator+(Vector3D& v){
    int i = (this->x) + (v.x);
    int j = (this->y) + (v.y);
    int k = (this->z) + (v.z);
    return Vector3D(i, j, k);
}

Vector3D Vector3D:: operator-(Vector3D& v){

    int i = (this->x) - (v.x);
    int j = (this->y) - (v.y);
    int k = (this->z) - (v.z);
    return Vector3D (i, j, k);
}

Vector3D Vector3D::operator-(){
    x= -x;
    y= -y;
    z= -z;
};

ostream& operator<<(ostream& out, const Vector3D& v){
    out << v.x << " " << v.y << " " << v.z;
    return out;
}

istream& operator>>(istream& in, Vector3D& v){
    in >> v.x >> v.y >> v.z;
    return in;
}
