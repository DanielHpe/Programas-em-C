#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void ocorrencia(char n[], char l, int t){
	int cont;
	int numL = 0;
	for(cont = 0; cont < t; cont++){
		if(n[cont] == l){
			numL++;
		}
	}
	
	printf("Foram encontradas %d letras '%c' " , numL, l);
}
int main(){
	char nome[30];
	char letra;
	int tamanho;
	
	printf("Digite o nome desejado: ");
	gets(nome);
	fflush(stdin);
	printf("Digite a letra desejada: ");
	scanf("%c", &letra);
	tamanho = strlen(nome);
	
	ocorrencia(nome, letra, tamanho);
	
}
