#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int palindromo(char palavra[], int num, int pos){
	if(pos < num/2)
		if(palavra[pos] == palavra[num - pos - 1])
			return 1*palindromo(palavra, num, pos+1);
		else
			return 0;
	else
		return 1;			
}

int main(){
	char palavra[255];
	int n;
	
	printf("Informe a palavra: ");
	fflush(stdin);
	gets(palavra);
	n = strlen(palavra);
	if(palindromo(palavra, n, 0))
		printf("\nE um palindromo\n");
	else
		printf("\nNao e um palindromo\n");	
}
