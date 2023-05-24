#include <iostream>
using namespace std;

void mensagem(string msg){
  cout << msg;
}

inline int cube(int x){
  mensagem("\n\nInforme um numero: ");
  cin >> x;

  cout << "O cubo de " << x << " e: " << x*x*x;

}

int main() {
  int a, x;
  mensagem("Informe um numero inteiro: ");
  cin >> a;

  int *ptr_b = nullptr;
  ptr_b = &a;
  cout << "\nValor apontado pelo ponteiro: " << *ptr_b << "\n";
  cout << "Endereco de memoria apontado: " << ptr_b << "\n";
  cout << "Endereco de memoria do proximo ponteiro: " << ptr_b + 1;

  cube(x);
}
