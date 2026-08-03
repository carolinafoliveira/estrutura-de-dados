//PROGRAMA EX03.CPP
//Escreva uma função bool ehPar(int n)que retorna true se o número for par.

#include <iostream>

using namespace std;

bool ehPar(int32_t n)
{
    return (n % 2 == 0);
}

int main(void)
{
    int32_t numero;

    cout << "Informe um numero: ";
    cin >> numero;
    cin.ignore(80, '\n');

    if (ehPar(numero))
        cout << "\nNumero PAR." << endl;
    else
        cout << "\nNumero IMPAR." << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();
    return 0;
}