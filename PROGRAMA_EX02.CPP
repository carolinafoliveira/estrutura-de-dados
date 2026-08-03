//PROGRAMA EX02.CPP

//Escreva uma função void trocar(int &a, int &b) que troca os valores.

#include <iostream>

using namespace std;

void trocar(int32_t &a, int32_t &b)
{
    int32_t x;

    x = a;
    a = b;
    b = x;
}

int main(void)
{
    int32_t primeiro, segundo;

    cout << "Informe o primeiro numero: ";
    cin >> primeiro;
    cin.ignore(80, '\n');

    cout << "Informe o segundo numero: ";
    cin >> segundo;
    cin.ignore(80, '\n');

    trocar(primeiro, segundo);

    cout << "\nValores trocados\n";
    cout << "Primeiro = " << primeiro << endl;
    cout << "Segundo  = " << segundo << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();
    return 0;
}