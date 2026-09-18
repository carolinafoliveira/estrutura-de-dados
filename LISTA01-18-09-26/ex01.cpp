/* 1 - Dado o array abaixo, escreva um programa em C++ que calcule e exiba a média, o maior e o menor valor. 
Use apenas um loop para resolver tudo.
int notas[] = {7, 9, 5, 8, 6, 10, 4};*/

#include <iostream>

using namespace std;

int main(void){

	int notas[] = {7, 9, 5, 8, 6, 10, 4}; // cria o array
	int quantidade = 7; // define a quantidade de elementos do array
	int soma = 0; 
	int maior = notas[0]; // assume que o maior valor é o que se encontra no indice 0
	int menor = notas[0]; // assume que o menor valor é o que se encontra no indice 0
	
	for(int i = 0; i < quantidade; i++) {
		soma = soma + notas[i];
		
		if (notas[i] > maior)
			maior = notas[i];
			
		if (notas[i] < menor)
			menor = notas[i];
	}
	
	double media = soma / quantidade;
	
	cout << "Media...: " << media << endl;
	cout << "Maior...: " << maior	<< endl;
	cout << "Menor...: " << menor << endl;
	
	return 0;
}
