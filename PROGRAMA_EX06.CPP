//PROGRAMA EX06.CPP
//Tabuada de um número que o usuário digitar (0 a 10).

#include <iostream>

using namespace std;

int main(void)
{
    int32_t numero;

    cout << "Informe um numero: ";
    cin >> numero;
    cin.ignore(80, '\n');

    cout << endl;

    for (int32_t i = 1; i <= 10; ++i)
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();
    return 0;
}