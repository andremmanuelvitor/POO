#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente{
protected:
  string nome, endereco;
  int idade;
public:
  Cliente(string nn="Ninguem", int id=18, string end="NDA") : nome{nn}, idade{id}, endereco{end} { }
  virtual ~Cliente() { }

  virtual float saque(int) { return 0; }
  virtual float deposito(int) { return 0; }
  virtual void imprime();
};

#endif
