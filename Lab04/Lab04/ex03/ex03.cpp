#include "carro.h"
#include <iostream>

int main(){
  Carro um("Carro 1", 20, 200);
  Carro dois("Carro 2", 30, 400);
  um.print();
  dois.print();

  return 0;
}
