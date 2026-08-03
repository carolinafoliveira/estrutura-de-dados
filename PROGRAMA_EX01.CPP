//PROGRAMA EX01.CPP

//Escreva uma função int maximo(int a, int b) que retorna o maior dos dois.

#include <iostream>

using namespace std;

// Função que retorna o maior entre dois números
int32_t maximo(int32_t a, int32_t b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(void)
{
    int32_t x, y;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cin.ignore(80, '\n');

    cout << "Digite o segundo numero: ";
    cin >> y;
    cin.ignore(80, '\n');

    cout << "\nMaior numero: " << maximo(x, y) << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();
    return 0;
}