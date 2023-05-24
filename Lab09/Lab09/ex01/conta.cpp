#include "conta.h"
#include <iostream>
using namespace std;

float Conta::saque(int credito){
  if(credito>saldo){
    cout << "Sua conta nao tem saldo suficiente." << endl;
  }else{
    saldo = saldo - credito;
  }
  return saldo;
}

float Conta::deposito(int debito){
  saldo = saldo + debito;
  return saldo;
}

void Conta::imprime(){
  cout << "----------------------------" << endl;
  cout << "      Dados do Cliente      " << endl;
  Cliente::imprime();
  cout << "----------------------------" << endl;
  cout << "Numero da conta: " << numero << endl;
  cout << "Agencia do cliente: " << agencia << endl;
  cout << "Saldo da conta (R$): " << saldo << endl;

}
