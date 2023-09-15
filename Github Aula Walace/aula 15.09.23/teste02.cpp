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
