#include "contaespecial.h"
#include <iostream>
using namespace std;

float ContaEspecial::saque(int credito){
  if(credito>(saldo+limite)){
    cout << "Sua conta nao tem saldo suficiente." << endl;
  }else{
    saldo = saldo - credito;
  }
  return saldo;
}

float ContaEspecial::deposito(int debito){
  saldo = saldo + debito;
  return saldo;
}

void ContaEspecial::imprime(){
  Conta::imprime();
  cout << "Limite Especial na conta: " << limite << endl;
}
