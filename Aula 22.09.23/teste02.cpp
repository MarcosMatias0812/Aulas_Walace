/*Escreva um algoritmo em C para ler 5
números, um de cada vez, e ir armazenando-o
em um vetor. Em seguida exiba os valores desse
vetor em ordem crescente dos índices e em
ordem decrescente dos índices.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	char 	nome [100], letra;
	int 	i, tamanho;
	
	printf("Digite seu nome completo: \n");
	letra = getchar();
	
	while (letra != '\n'){
		nome[i] = letra;
		i++;
		letra = getchar();
	}
	//printf("%s tem %d caracteres\n", nome, i);
	tamanho = i;
	for(i = 0; i < tamanho; i++)
		printf("%c", nome[i]);
	
	printf("\n==========================\n");
	
	for(i = tamanho - 1; i >= 0; i--)	
		printf("%c", nome[i]);
}
