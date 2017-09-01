#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int	fatorial(int n){
	if(n > 0)
		return n*fatorial(n-1);
	else
		return 1;	
}

int main(){
	int num, fat;
	
	printf("Digite o numero N desejado: ");
	scanf("%d", &num);
	
	fat = fatorial(2*num)/fatorial(num);
	
	printf("\nO fatorial quadruplo de %d e: %d", num, fat);
}
