#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> fila_heap;

void cabecalho(){
  cout << "--------------------------------------------------" << endl;
  cout << "                  Programa de Heap STL            " << endl;
  cout << "--------------------------------------------------" << endl;
}

void menu()
{
  cout << "\n";
  cout << "1. Insira um elemento na heap" << endl;
  cout << "2. Remova um elemento da heap" << endl;
  cout << "3. Tamanho da heap" << endl;
  cout << "4. Primeiro elemento da heap" << endl;
  cout << "5. Sair" << endl;
};

void heap(int b)
{
  int num1, num2;
  switch(b)
  {
    case 1:
    cout << "Entre com o valor a ser inserido: "; cin >> num1;
    fila_heap.push(num1);
    break;

    case 2:

    if(!fila_heap.empty()) {
      cout << "Elemento " << fila_heap.top() << " removido do topo da heap."<< endl;
      fila_heap.pop();
    } else {
      cout << "Não ha o que ser removido."<< endl;
    }
    break;

    case 3:
    cout << "Tamanho da heap: " << fila_heap.size() << endl;
    break;

    case 4:
    cout << "Primeiro elemento da heap (topo): " << fila_heap.top() << endl;
    break;

    case 5:
    cout << "Obrigado por usar o programa! Ele sera finalizado =D" << endl;
    break;
  }
};

int main() {

  int op;

  cabecalho();
  while (op!=5){
  menu();
  cout << "Escolha (1-5): "; cin >> op;
  heap(op);
  }

  return 0;
}
