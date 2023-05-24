#include "cliente.h"
#include <iostream>
#include <string>
using namespace std;

void Cliente::imprime(){
  cout << "Nome do Cliente: " << nome << endl;
  cout << "Idade do Cliente: " << idade << endl;
  cout << "Endereco do Cliente: " << endereco << endl;
}
