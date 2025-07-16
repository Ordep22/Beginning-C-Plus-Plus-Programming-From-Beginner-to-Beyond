#ifndef _SIMPLEBANK_H_
#define _SIMPLEBANK_H_

#include <string>

class SimpleBanck
{
private:
    std::string user_name;
    double saldo;

public:
    void setDados(std::string name, double saldoInicial);
    void depositar(double valor);
    void sacar(double valor);
    void mostrarSaldo();
};

#endif