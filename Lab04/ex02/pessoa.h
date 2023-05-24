#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa{
  private:
    string nome;
    int idade;
    float altura;

  public:
    Pessoa();
    Pessoa(string, int, float);
    ~Pessoa() { };

    void imprime();

    void set_nome(string n) { nome = n; }
    string get_nome() { return nome; }

    void set_idade(int i) { idade = i; }
    int get_idade() { return idade; }

    void set_altura(float a) { altura = a; }
    float get_altura() { return altura;}
};


#endif
