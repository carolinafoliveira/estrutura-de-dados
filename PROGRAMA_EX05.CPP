//PROGRAMA EX05.CPP
//Leia números até digitar 0 e apresente a soma.

#include <iostream>

using namespace std;

int main(void)
{
    int32_t numero;
    int32_t soma = 0;

    cout << "Informe um numero (0 encerra): ";
    cin >> numero;
    cin.ignore(80, '\n');

    while (numero != 0)
    {
        soma += numero;

        cout << "Informe um numero (0 encerra): ";
        cin >> numero;
        cin.ignore(80, '\n');
    }

    cout << "\nSoma = " << soma << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();
    return 0;
}