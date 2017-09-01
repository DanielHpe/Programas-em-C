#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void converteBinario(int n){
	int cont, q[80], r[80];
	cont = 0;
	printf("\n%d em Binario e: ", n);
	while(n != 1){
		q[cont] = n/2;
		r[cont] = n % 2;
		n = q[cont];
		cont++;
	}
	
	cont--;
	
	while(cont>0){
		if(q[cont] == 1)
			printf("1%d", r[cont]);
		else
			printf("%d", r[cont]);
		
		cont--;			
	}
	printf("\n");
}

int converteBinarioRecursivo(int n){
	if(n < 2){
		return n;
	}
	return(10*converteBinarioRecursivo(n/2)) + n % 2;
}

int main(){
	int num;
	
	printf("Digite o numero para conversao: ");
	scanf("%d", &num);
	
	converteBinario(num);
	printf("\nO numero %d convertido de decimal para binario de forma recursiva e: %d", num, converteBinarioRecursivo(num));

}
