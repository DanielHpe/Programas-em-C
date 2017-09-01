#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
 
 int menu(){
 	
 	int opcao;
	printf("Opcoes possiveis \n\n");
	printf("0 - Sair\n");
	printf("1 - Strlen\n");
	printf("2 - Strcpy\n");
	printf("3 - Strcat\n");
	printf("4 - Strcmp\n");
	printf("\n\nO que deseja fazer? ");
	scanf("%d", &opcao);
 	
	return opcao;
 }
 
void strlen(char string[]){

}
 
int main(){
 	
 	int opcao;
 	char string[80];
 	
 	printf("Digite a String a ser analisada: ");
 	gets(string);
 	fflush(stdin);
 	printf("\n");
 	
 	
	do{
		opcao = menu();
		switch (opcao){
			case 0: 
			 	break;
			case 1:
				strlen(string);
				printf("\n\n");
				system("pause");
				system("cls");
				break;
			case 2: 
				printf("\n\n");
				system("pause");
				system("cls");				
			 	break;
			case 3: 
			 	printf("\n\n");
				system("pause");
				system("cls");				 	
			 	break;
			case 4:
				printf("\n\n");
				system("pause");
				system("cls");
				break;
			case 5: 
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
	}while (opcao != 0);
	
 	return 0;
 }
