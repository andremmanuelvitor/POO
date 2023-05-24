#ifndef CONTA_H
#define CONTA_H
#include "cliente.h"
#include <string>
using namespace std;

class Conta : public Cliente{
protected:
  int numero, agencia;
  double saldo;
public:
  Conta(string nn="Ninguem", int id=18, string end="NDA", int num=0, int ag=0, float sal=0)
                  : Cliente{nn, id, end}, numero{num}, agencia{ag}, saldo{sal} { }

  ~Conta() { }

  float saque(int);
  float deposito(int);
  void imprime();
};

#endif
