#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	int vetor[7];
	int cont;
	
	for(cont=0; cont<7; cont++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[cont]);
	}
	
	printf("\n");
	
	for(cont=0; cont<7; cont++){
		printf("%d\n", vetor[cont]);
		printf("%d\n", &vetor[cont]);
	}	
}
