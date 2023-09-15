/* Joãozinho, como castigo, escreva 500 vezes no quadro a frase:“Eu não vou mais jogar aviõezinhos de papel na sala de aula”.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(0,"Portuguese");
	int count;
	
	//FOR
	//for(count=1; count<=500; count++)
		//printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);//
    

	//WHILE
	//count = 1;
	
	//while (count <= 500){
	//	printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);
		//count++;
	//}

	//DO WHILE
	count = 1;
	
	do{
		printf("Eu não vou mais jogar aviõezinhos de papel na sala de aula %d.\n", count);
		count++;
	}while (count <= 500);
}
