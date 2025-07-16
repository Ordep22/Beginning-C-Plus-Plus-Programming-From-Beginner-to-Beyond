#include <iostream>
#include "SimpleBank.h"

#define USUARIO 0
#define DEPOSITAR 1
#define SACAR 2
#define SALDO 3

using namespace std;

int main()
{

    int escolha = 5;
    SimpleBanck SPBank;
    cout << "Entre com a opcao de operacao" << endl;
    cout << "0 - Usuario" << endl;
    cout << "1 - Depositar" << endl;
    cout << "2 - sacar" << endl;
    cout << "3 - Mostrar Saldo" << endl;
    cin >> escolha;

    switch (escolha)
    {

    case USUARIO:
        break;
    case DEPOSITAR:
        break;
    case SACAR:
        break;
    case SALDO:
        break;
    default:
        break;
    }
}