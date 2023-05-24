#include <iostream>
#include "pessoa.h"

Pessoa::Pessoa(){
  nome = "indefinido";
  idade = 0; altura = 0.0;
}

Pessoa::Pessoa(string n, int i, float a){
  nome = n;
  idade = i; altura = a;
}

void Pessoa::imprime() {
  cout << nome << " tem " << idade << " ano (s) e mede " << altura << "m" << endl;
}
