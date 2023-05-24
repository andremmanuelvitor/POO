#include <iostream>
#include <set>

using namespace std;

multiset<int> arvore;
multiset<int> ::iterator it, itlow, itup, p, u;

void cabecalho(){
  cout << "=================================================" << endl;
  cout << "Implementacao de Arvore (set) no STL " << endl;
  cout << "=================================================" << endl;
}

void funcoesArvores()
{
  cout << "\n";
  cout << "1. Inserir elemento" << endl;
  cout << "2. Remover elementos com determinado valor" << endl;
  cout << "3. Exibir elementos em ordem" << endl;
  cout << "4. Exibir quantidades de elementos" << endl;
  cout << "5. Remover todos os elementos" << endl;
  cout << "6. Consultar quantidade de elementos com determinado valor" << endl;
  cout << "7. Sair " << endl;

};

void respostasArvores(int b)
{
  int num1, num2;
  switch(b)
  {
    case 1:
    cout << "Entre com o valor a ser inserido: "; cin >> num1;
    arvore.insert(num1);
    break;

    case 2:

    cout << "Entre com o valor a ser removido: "; cin >> num1;
    arvore.erase(num1);
    cout << "Elemento " << num1 << " foi removido da arvore."<< endl;
    break;

    case 3:
    cout << "Elementos da arvore: " <<endl;
    for(it = arvore.begin(); it != arvore.end(); ++it){
      cout<< *it << " ";
    }
    break;

    case 4:
    cout << "Tamanho da arvore: "<< arvore.size() <<endl;
    break;

    case 5:
    p = arvore.begin();
    u = arvore.end();

    cout << "Arvore limpa" << endl;
    itlow = arvore.lower_bound(*p);
    itup = arvore.upper_bound(*u);
    arvore.erase(itlow,itup);
    break;

    case 6:
    cout << "Entre com o valor a ser consultado: "; cin >> num1;
    cout << "Existem " << arvore.count(num1) << " desse elemento na arvore "<< endl;
    break;

    case 7:
    cout << "Obrigado por usar o programa! Ele sera finalizado =D" << endl;
    break;
  }
};

int main() {

  int op;
  cabecalho();
  while (op != 5)
  {
  funcoesArvores();
  cout << "Escolha uma opcao: "; cin >> op;
  respostasArvores(op);
  }

  return 0;
}
