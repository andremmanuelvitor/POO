//LAB01 - ECOP13 - LABORATORIO DE PROGRAMAÇÃO ORIENTADA A OBJETO - T02
// ANDRE EMMANUEL DE OLIVEIRA CANDIDO VITOR - 2020002310
#include "vetor.h"
#include <iostream>

using namespace std;

int main(){
  Vector3D vetor1;
  Vector3D vetor2;

  cout << "Programa para calculo de vetores 3D\n";
  cout << "--------------------------------------\n";

  cout << "Entre com vetor 1: ";
  cin >> vetor1;
  cout << "Entre com vetor 2: ";
  cin >> vetor2;

  cout << "Vetor 1 + Vetor 2 = " << vetor1+vetor2 << "\n";
  cout << "Vetor 1 - Vetor 2 = " << vetor1-vetor2 << "\n";

  cout << "Vetor 1 normal: " << vetor1 << "\n";
  -vetor1;
  cout << "Vetor 1 Invertido: " << vetor1;


  return 0;

}
