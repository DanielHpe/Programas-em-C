#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct {
	char marca[15];
	int ano;
	char cor[10];
	float preco;
} carro;

typedef struct {
	carro info;
	struct t_no *prox;
}t_no;

t_no *l;
carro c;

void inicializa() 
{
 	l == NULL;
}

int vazia() 
{
 	return (l == NULL ? 1 : 0);
}

void insere_primeiro(carro info) 
{
	t_no *p = malloc(sizeof (t_no));
	p->info = info;
	p->prox = NULL;
	l = p;
}

void imprimeDados(){
	t_no *aux = l;
	if(aux == NULL){
		printf("Vazia");
		return;
	}
	printf("\n\n Elementos \n\n");
	while(aux != NULL){
		printf("Marca: %s\n", aux->info.marca);
		printf("Ano: %d\n", aux->info.ano);
		printf("Cor: %s\n", aux->info.cor);
		printf("Preco: %3.2f\n", aux->info.preco);
		aux = aux->prox;
	}
}

int main(){
	
	carro *ponteiro;
	
	inicializa();
	
	printf("Digite a marca do carro: ");
	fflush(stdin);
	gets(c.marca);
	printf("Digite o ano do carro: ");
	scanf("%d", &c.ano);
	printf("Digite a cor do carro: ");
	fflush(stdin);
	gets(c.cor);
	printf("Digite o preco do carro: ");
	scanf("%f", &c.preco);
	insere_primeiro(c);
	imprimeDados();
	return 0;
}
