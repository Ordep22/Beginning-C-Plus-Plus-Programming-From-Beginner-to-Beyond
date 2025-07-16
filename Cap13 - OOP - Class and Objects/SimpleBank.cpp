#include <iostream>
#include "SimpleBank.h"

void SimpleBanck::setDados(std::string nome, double saldoInicial)
{
    nome = nome;
}
void SimpleBanck::depositar(double valor)
{
    saldo = saldo + valor;
}
void SimpleBanck::sacar(double valor)
{
    saldo = saldo - valor;
    mostrarSaldo();
}
void SimpleBanck::mostrarSaldo()
{
    std::cout << "O novo valor de saldo e:" << saldo << std::endl;
}
