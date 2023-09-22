#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(0,"Portuguese");
	int numeros [5], i;
	
	printf("Digite 5 números inteiros: \n");
	for(i = 0; i <5; i++) {
		scanf("%d", &numeros[i]);
	}
	for (i = 0; i < 5; i++){
		printf("O número digitado foi: %d\n", i + 1, &numeros[i]);
	}
	
		
	for (i = 4; i >= 0; i--){
		printf("O %do número digitado foi: %d\n", i + 1, &numeros[i]);
	}
}
