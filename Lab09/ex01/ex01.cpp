#include "cliente.cpp"
#include "conta.cpp"
#include "contaespecial.cpp"

#include <iostream>
using namespace std;

int main(){
  cout << "=== Banco S.A - Sem Atendimento ===" << endl;

  Cliente* vector_cliente[4];
  vector_cliente[0] = new Conta{"Andre", 20, "Rua Cleiton Santos Alves, Campinas, SP", 98445, 001, 6600};
  vector_cliente[1] = new Conta{"Renato", 19, "Av Sao Jose, Varginha, MG", 89554, 001, 5750};
  vector_cliente[2] = new ContaEspecial{"Antonio", 20, "Av BPS, Itajuba, MG", 78443, 866, 3450, 5000};
  vector_cliente[3] = new ContaEspecial{"Frederico", 46, "Rua Comendador Jose Carlos, Prados, MG", 67332, 321, 8900, 15000};

  // laco de impressao dos vetores
  for (auto x : vector_cliente){
    cout << "\n";
    x->imprime();
    cout << "\n----------------------------\n" << endl;
  }

  cout << "Saques e Debitos." << endl;
  vector_cliente[0]->deposito(3400);
  vector_cliente[2]->deposito(3000);
  vector_cliente[1]->saque(6000);
  vector_cliente[3]->saque(30000);

  cout << "Contas atualizadas." << endl;
  for(int i=0;i<4;i++){
    vector_cliente[i]->imprime();
    cout << "\n----------------------------\n" << endl;
  }

  return 0;
}
