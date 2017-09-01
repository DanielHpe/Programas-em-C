#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[10][30], sobrenome[10][30], aux[30];
	int i = 0;
	int j, cont, somaTotalLetras;
	int soma[10];
	float media;


	for(i = 0; i < 10; i++){
		printf("Entre com o %d nome: ", i + 1);
		fgets(nome[i], 30, stdin);
		soma[i] = strlen(nome[i]);
		printf("Entre com o %d sobrenome: ", i + 1);
		fgets(sobrenome[i], 30, stdin);
	}
	
	for(cont = 0; cont < 10; cont++){
		somaTotalLetras = somaTotalLetras + soma[cont];
	}
	
	media = somaTotalLetras/10;
	
	for(j=1; j<10; j++){
		strcpy(aux, nome[j]);
		i = j-1;
		while(i >= 0 && strcmp(nome[i], aux) > 0)
		{
			strcpy(nome[i+1],nome[i]);
			i--;
		}
		strcpy(nome[i+1],aux);
	}
	
	for(j=1; j<10; j++){
		strcpy(aux, sobrenome[j]);
		i = j-1;
		while(i >= 0 && strcmp(sobrenome[i], aux) > 0)
		{
			strcpy(sobrenome[i+1], sobrenome[i]);
			i--;
		}
		strcpy(sobrenome[i+1],aux);
	}

	printf("\n");
	system("pause");
	system("cls");


	printf("\nNomes em ordem alfabetica: \n");
	for(i = 0; i < 10; i++){
		printf("\n%s", nome[i]);
	}
	
	printf("\n");
	system("pause");
	system("cls");
	
	printf("\nSobrenomes em ordem alfabetica: \n");
	for(i = 0; i < 10; i++){
		printf("\n%s", sobrenome[i]);
	}
	
	printf("\n");
	system("pause");
	system("cls");
	
	printf("\nA media de letras dos nomes e: %3.2f", media);
	
}
