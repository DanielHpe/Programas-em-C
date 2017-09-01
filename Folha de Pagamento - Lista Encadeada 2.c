#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct {
	char nome[30][5];
	int matricula[5];
	float salario[5];
} funcionario;

typedef struct{
	int codigo[5];
	char nome[30][5];
	int horas[5];
} folha;

typedef struct {
	funcionario info;
	folha inf;
	struct t_no *prox;
} t_no;

funcionario fun;
folha fol;
t_no *l;

void lerDadosFuncionarios(){
	printf("\n\nLendo os dados dos funcionarios\n\n");
	int cont;
	for(cont=0; cont<5; cont++){
		printf("Nome: ");
		scanf("%s", &fun.nome[30][cont]);
		printf("Matricula: ");
		scanf("%d", &fun.matricula[cont]);
		printf("Salario: ");
		scanf("%f", &fun.salario[cont]);
		printf("\n");
	}
	system("\n");
	system("pause");
	system("cls");
}

void lerDadosFolha(){
	printf("\n\nLendo dados da folha de pagamento\n\n");
	int cont;
	for(cont=0; cont<5; cont++){
		printf("Codigo: ");
		scanf("%d", &fol.codigo[cont]);
		printf("Nome do Funcionario: ");
		scanf("%s", &fol.nome[30][cont]);
		printf("Total de horas extras trabalhadas: ");
		scanf("%d", &fol.horas[cont]);
		printf("\n");
	}
	system("\n");
	system("pause");
	system("cls");	
}

int extra(){
	int horasTotais = 160;
	int cont;
	float num[5];
	printf("\n\nValor recebido de horas extras\n\n");
	for(cont=0; cont<5; cont++){
		num[cont] = 30*fun.salario[cont]/100; 
		printf("Funcionario %d recebe %3.1f de hora extra", cont+1, num[cont]);
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
	
	imprimeFolha(num);
}

void imprimeFolha(float ext[]){
	int cont;
	printf("\nDados da Folha da Pagamento\n\n");
	for(cont=0; cont<5; cont++){
		printf("Codigo do Funcionario: %d \n", fol.codigo[cont]);
		printf("Nome do Funcionario: %c \n", fol.nome[cont]);
		printf("Total de horas extra: %d \n", fol.horas[cont]);
		printf("Ganho por horas extra trabalhadas: %3.2f \n", ext[cont]);
		printf("\n");
	}	
}


int main(){
	int valorExtra, numF, cont, opcao;
	float extrasGanhos[5];
	
	lerDadosFuncionarios();
	lerDadosFolha();
 	extra();
}

