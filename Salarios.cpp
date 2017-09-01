#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
 int menu(){
 	
 	int opcao;
	printf("\n\n Opcoes possiveis \n");
	printf("0 - Sair\n");
	printf("1 - Ler dados novamente\n");
	printf("2 - Media salario\n");
	printf("3 - Media filhos\n");
	printf("4 - Maior salario\n");
	printf("5 - Percentual de pessoas com salario ate 1000");	
	printf("\n\nO que deseja fazer? ");
	scanf("%d", &opcao);
 	
	return opcao;
 }
 
int mediaSal(int totalS, int p){
 	
 	float media;
 	media = totalS/p;
 	printf("\nA media de salario dessas pessoas e: %3.2f", media);
}

int mediaFil(int totalF, int p){
 	
 	float media;
 	media = totalF/p;
 	printf("\nA media de filhos dessas pessoas e: %3.2f", media);
}

int maiorSal(int m){
	
	printf("\nO maior salario dessas pessoas e %d: ", m);
} 

int percentual(int s[], int p){
	
	int cont, num = 0;
	float percent;
	for(cont = 0; cont < p; cont++){
		if(s[cont] < 1000){
			num++;
		}
	}
	
	percent = num*100/p;
	printf("\nO percentual de pessoas com salario ate 1000 e: %3.2f %", percent);
}

int main() {
 	
 	int opcao, pessoas, cont, maior;
	int salario[pessoas], filhos[pessoas];
 	int totalSal, totalFil = 0;
 	char resposta;
 	

 	printf("\nDigite o numero de pessoas analisadas: ");
 	scanf("%d", &pessoas);
 	
 	for(cont = 0; cont < pessoas; cont++){
 		printf("\nDigite o salario: ");
 		scanf("%d", &salario[cont]);
 		printf("Digite o numero de filhos: ");
 		scanf("%d", &filhos[cont]);
 		totalSal = totalSal + salario[cont];
 		totalFil = totalFil + filhos[cont];
 		if(salario[cont] > maior){
 			maior = salario[cont];
		}
	}
 	
 	
	do{
		opcao = menu();
		switch (opcao){
			case 0: 
			 	break;
			case 1:
			 	printf("\nDigite o numero de pessoas analisadas: ");
			 	scanf("%d", &pessoas);
			 	
			 	for(cont = 0; cont < pessoas; cont++){
			 		printf("\nDigite o salario: ");
			 		scanf("%d", &salario[cont]);
			 		printf("Digite o numero de filhos: ");
			 		scanf("%d", &filhos[cont]);
			 		totalSal = totalSal + salario[cont];
			 		totalFil = totalFil + filhos[cont];
			 		if(salario[cont] > maior){
 						maior = salario[cont];
					}
				}
				printf("\n\n");
				system("pause");
				system("cls");
				break;
			case 2: //Media Salario
				mediaSal(totalSal, pessoas);
				printf("\n\n");
				system("pause");
				system("cls");				
			 	break;
			case 3: //Media numero de Filhos
			 	mediaFil(totalFil, pessoas);
			 	printf("\n\n");
				system("pause");
				system("cls");				 	
			 	break;
			case 4: //Maior Salário
				maiorSal(maior);
				printf("\n\n");
				system("pause");
				system("cls");
				break;
			case 5: //Percentual de pessoas com salario até 1000;
				percentual(salario, pessoas);
				printf("\n\n");
				system("pause");
				system("cls");
				break;	
			default:
		 	printf("_____________Opcao invalida_____________\n\n");
		 	printf("\n\n");
			system("pause");
			system("cls");	
		}
	} while (opcao != 0);
	
 	return 0;
}
