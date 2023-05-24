#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "conta.h"
#include <string>
using namespace std;

class ContaEspecial : public Conta{
private:
  float limite;
public:
  ContaEspecial(string nn="Ninguem", int id=18, string end="NDA", int num=0, int ag=0, float sal=0, float lim=0)
                :  Conta{nn, id, end, num, ag, sal}, limite{lim} { }
  ~ContaEspecial() { }

  float saque(int);
  float deposito(int);
  void imprime();
};

#endif
