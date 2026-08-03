//PROGRAMA EX04.CPP
//Leia 5 notas e informe quantas são maiores que 7.

#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    array<double, 5> nota;

    int16_t contador = 0;

    for (size_t i = 0; i < nota.size(); ++i)
    {
        cout << "Informe a " << i + 1 << "a nota: ";
        cin >> nota[i];
        cin.ignore(80, '\n');
    }

    for (size_t i = 0; i < nota.size(); ++i)
    {
        if (nota[i] > 7)
            contador++;
    }

    cout << "\nQuantidade de notas maiores que 7 = ";
    cout << contador << endl;

    cout << "\nTecle <Enter> para encerrar...";
    cin.get();

    return 0;
}