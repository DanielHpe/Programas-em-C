#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	char s[10] = "abcdefghi";	
	char* cptr;
	int cont;
	//Seu programa começa aqui 
	
	for(cont=10; cont>0; cont--){
		printf("%c", s[cont]);
	}
}
