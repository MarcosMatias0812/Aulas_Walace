//LAÇOS DE REPETIÇÃO//

/* faça um programa que leia duas notas e calcule a média destas notas
e apresente o resultado.
OBS: Repita para três alunos
*/

#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(0, "Portuguese");
	float nota1,nota2,media;
	
	printf("Digite duas notas: ");
	scanf("%f %f", &nota1, &nota2);
	media = (nota1 + nota2) / 2.0;
	
	printf("A média é: %.2f\n", media);
}

/*---AGORA COM LAÇO DE REPETIÇÃO---------------------*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0,"Portuguese");
	int contador;
	float nota1,nota2,media;
	
	for(contador = 1; contador <= 3; contador++){
		printf("Digite duas notas: ");
		scanf("%f %f", &nota1, &nota2);
		media = (nota1 + nota2) / 2.0;
		
		printf("A média é: %.2f\n", media)
	}
}

/*--------------------------------------------------*/
/*Faça um programa que calcule a média de duas notas. Ao final dos cálculos pergunte ao usuário se ele quer realizar um novo cálculo.
Se a resposta for "s" repita, para qualquer outra resposta, saia do programa.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(0,"Portuguese");
	float nota1, nota2, media;
	char resposta;
	
	do {
	printf("Digite duas notas: ");
		scanf("%f %f", &nota1, &nota2);
		getchar();
		media = (nota1 + nota2) / 2.0;
		
		printf("A média é: %.2f\n", media);
		printf("Deseja realizar um novo cálculo ? (s/n)");
		scanf("%c", &resposta);
	} while(resposta == 's');
	
}

/*-------------------------------------------------*/
/* Joãozinho, como castigo, escreva 500 vezes no quadro a frase:“Eu não vou mais jogar aviõezinhos de papel na sala de aula”.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0,"Portuguese");
	int count;
	
	//FOR
	for(count=1; count<=500; count++)
		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);//
    

	//WHILE
	count = 1;
	
	while (count <= 500){
		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);
		count++;
	}

	//DO WHILE
	count = 1;
	
	do{
		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);
		count++;
	}while (count <= 500);
}

/*-------------------------------------------------*/
/*Faça um programa em C que leia seu nome completo da entrada (stdin) letra a letras e as escreva uma em cada linha.
Você poderá utilizar qualquer estrutura de repetição.*/

#include <stdio.h>
#include <locale.h>

int main(){
	char letra;
	
	printf("Digite seu nome completo: ");
	letra = getchar();
	while(letra != '\n') {
		printf("%c\n", letra);
		letra = getchar();
	}
}

/*-------------------------------------------------*/