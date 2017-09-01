#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int pell(int n){
	if(n == 0)
		return 0;
	else	
	if(n == 1)
		return 1;
	else	
	if(n > 1)	
		return 2*pell(n-1) + pell(n-2);
}

int main(){
	int num, cont;
	int vet[num];
	printf("Digite a ordem N de Pell: ");
	scanf("%d", &num);
	pell(num);
	printf("\nO termo de ordem %d da serie de Pell e: %d", num, pell(num));
	printf("\n\nSequencia de Pell de ordem 20: ");
	for(cont = 0; cont <= 20; cont++){
		printf("%d ", pell(cont));
	}
	
	
}
