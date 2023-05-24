//LAB01 - ECOP13 - LABORATORIO DE PROGRAMAÇÃO ORIENTADA A OBJETO - T02
// ANDRE EMMANUEL DE OLIVEIRA CANDIDO VITOR - 2020002310
#include "complexo.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    Complexo c1;
    Complexo c2;

    cout << "Programa com Complexos\n";
    cout << "------------------------\n";

    cout << "Entre com o primeiro complexo: ";
    cin >> c1;
    cout << "Entre com o segundo complexo: ";
    cin >> c2;

    cout << "\nModulos e angulos:\n";
    cout << "  Primeiro Complexo - Modulo " << c1.modulo() << " e Angulo " << c1.angulo() << "\n";
    cout << "  Segundo Complexo - Modulo " << c2.modulo() << " e Angulo " << c2.angulo() << "\n";

    cout << "\nO primeiro complexo";
    if(c2 > c1) cout << " (nao)";
    cout << " e maior que o segundo.\n";

    cout << "O primeiro complexo e";
    if(c1 == c2) cout << " identico ";
    else cout << " diferente ";
    cout << "segundo complexo.";
}
