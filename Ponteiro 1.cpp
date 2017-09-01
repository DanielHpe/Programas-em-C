#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int var = 10;
	int *ponteiro = &var;
	
	var = var + 13;
	printf("Valor de var: %d", *ponteiro);
	printf("\nEndereco de var: %d", ponteiro);
	
	
}
