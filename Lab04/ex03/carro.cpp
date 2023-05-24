#include "carro.h"
#include <iostream>
using namespace std;

Carro::Carro(string n, int g, int k) : nome{n}, gas{g}, km{k}{
  if((g>50)||(g<0)) gas = 50;
  else gas = g;
}

void Carro::print(){
  cout << nome << " abastecido com " << gas << " litros. \n";
  cout << nome << "  percorreu " << km << " km. \n";
  cout << nome << " ainda tem " << rest_km();
  cout << "L de gasolina e pode andar por mais " << rest_km() << " km.\n";
}

void Carro::set_gas(int n){
  if(n<51){
    gas = n;
  }
}

float Carro::rest_gas(){
  return gas - (km/15);
}

int Carro::rest_km() {
  return 15*gas - km;
}
