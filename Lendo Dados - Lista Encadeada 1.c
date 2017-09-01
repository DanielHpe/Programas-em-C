#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
	char nome[30];
	int dataNas;
	int cpf;
}pessoa;

typedef struct{
	pessoa info;
	struct t_no *prox;
}t_no;

pessoa p;
t_no *l;

void lerDados(){
	printf("Digite o nome: ");
	fflush(stdin);
	gets(p.nome);
	printf("Digite a data de nascimento: ");
	scanf("%d", &p.dataNas);
	printf("Digite o CPF: ");
	scanf("%d", &p.cpf);
}

void insere(pessoa info) 
{
	t_no *p = malloc(sizeof (t_no));
	p->info = info;
	p->prox = NULL;
	l = p;
}

void imprimeDados(){
	t_no *aux = l;
	printf("\nNome: %s\n", aux->info.nome);
	printf("Data de Nascimento: %d\n", aux->info.dataNas);
	printf("CPF: %d", aux->info.cpf);
	aux = aux->prox;
}

int main(){
	
	lerDados(p);
	insere(p);
	imprimeDados();
}
