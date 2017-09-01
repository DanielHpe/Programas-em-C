#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soma(int v[], int n){
	
	if(n < 10){
		return v[n] + soma(v, n + 1);
	}
	else return 0;
}

int main(){
	
	int vetor[10];
	int cont;
	int resultado;
	
	for(cont=0; cont<10; cont++){
		printf("Digite o elemento %d do Vetor: ", cont+1);
		scanf("%d", &vetor[cont]);
	}
	
	printf("\n\nVetor: ");
	for(cont=0; cont<10; cont++){
		printf("%d ", vetor[cont]);
	}
	
	resultado = soma(vetor, 0);
	
	printf("\n\nO resultado da soma e: %d", resultado);
	
}

