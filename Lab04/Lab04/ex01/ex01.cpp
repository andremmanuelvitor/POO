#include "pilha.h"
#include <iostream>

using namespace std;

int main(){
  Pilha p(5);

  cout << "Pilha esta vazia? ";
  if(p.empty()) cout << "SIM\n";
  else
    cout << "NAO\n";

  cout << "Inserindo elementos...\n";
  p.push(120);
  p.push(200);
  p.push(300);

  cout << "O topo e  " << p.top() << endl;
  cout << "Retirando elemento... " << p.pop() << endl;
  cout << "Retirando elemento... " << p.pop() << endl;
  cout << "O topo e " << p.top() << endl;
}
