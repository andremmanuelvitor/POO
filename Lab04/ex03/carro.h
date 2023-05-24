#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;

class Carro{

  private:
    string nome;
    int gas, km;
    
  public:
    Carro(string, int , int);
    ~Carro() { };

    void print();
    int get_gas() {return gas;}
    void set_gas(int);
    float rest_gas();
    int get_km() {return km;}
    void set_km(int n) { km = n; }
    int rest_km();

};

#endif
