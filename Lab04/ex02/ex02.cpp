#include <iostream>
#include "pessoa.h"

int main() {
  Pessoa indefinido;
  Pessoa fulano("Manuel", 33, 1.75);
  Pessoa ciclano("Maria", 18, 1.65);

  indefinido.imprime();
  fulano.imprime();
  ciclano.imprime();

  return 0;
}
