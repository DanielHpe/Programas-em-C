#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int numeros(char p[], int n){
	int cont = 0;
	int total = 0;
	for(cont = 0; cont < n; cont++){
		if(isdigit(p[cont])){
			total++;
		}
	}
	
	return total;
}

int minusculas(char p[], int n){
	int cont = 0;
	int total = 0;
	for(cont = 0; cont < n; cont++){
		if(islower(p[cont])){
			total++;
		}
	}
	
	return total;
}

int espaco(char p[], int n){
	int cont = 0;
	int total = 0;
	for(cont = 0; cont < n; cont++){
		if(isspace(p[cont])){
			total++;
		}
	}
	
	return total;
}

int main(){
	char palavra[80];
	int numC, totalN, totalM, totalS= 0;
	
	printf("Digite a String desejada: ");
	fflush(stdin);
	gets(palavra);
	numC = strlen(palavra);
	printf("\nNumero de caracteres da String: %d", numC);
	totalN = numeros(palavra, numC);
	printf("\n\nO total de numeros da String e: %d", totalN);
	totalM = minusculas(palavra, numC);
	printf("\n\nO total de letras minusculas da String e: %d", totalM);
	totalS = espaco(palavra, numC);
	printf("\n\nO total de espacos em branco e: %d", totalS);
}
