#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int fatorialDuplo(int n){
	if(n > 1)
		return n*fatorialDuplo(n-2);
	else
		return 1;	
}

int main(){
	int num;
	int div;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	while(num % 2 != 1){
		printf("Digite um valor impar: ");
		scanf("%d", &num);	
	}
	
	printf("O fatorial duplo de %d e: %d", num,fatorialDuplo(num));
	return 0;	
}
