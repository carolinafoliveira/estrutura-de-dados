/* 2 - Escreva uma FUNÇÃO que receba um array e o inverta sem usar um 
segundo array auxiliar. Em seguida, chame a função no main e imprima o array antes e depois */

#include <iostream>
#include <array>

using namespace std;

void inverter(int lista[], int quantidade) {
	int inicio = 0;
	int fim = quantidade - 1;
	
	while (inicio < fim) {
		int aux = lista[inicio];
		lista[inicio] = lista[fim];
		lista[fim] = aux;
		
		inicio++;
		fim--;
	}
}

void mostrar(int lista[], int quantidade) {
	for(int i = 0; i < quantidade; i++){
		cout << lista[i] << " ";
	}
	
	cout << endl;
}

int main(void){
	int lista[] = {7, 8, 9, 1, 3, 4, 2};
	
	int quantidade = 7;
	
	cout << "Antes: ";
	mostrar(lista, quantidade);
	
	inverter(lista, quantidade);
	
	cout << "Depois: ";
	mostrar(lista, quantidade);
	
	return 0;
}
