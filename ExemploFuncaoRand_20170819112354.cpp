#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
int main(void)
{
	printf("\n\nFun��o rand que gera sempre os mesmos valores\n");
    for(int i=1 ; i <= 10 ; i++) 
        printf("Numero %d: %d\n",i, rand());
        
    printf("\n\nFun��o srand � alimentada para gerar novos valores\n");
	srand( (unsigned)time(NULL) );
    for(int i=1 ; i <= 10 ; i++) 
        printf("Numero %d: %d\n",i, rand());
     
    printf("\n\nFun��o rand dentro de um intervalo\n");
    srand( (unsigned)time(NULL) );
    for(int i=1 ; i <= 10 ; i++) 
    	printf("Numero %d: %d\n",i, rand() % 25);
     
     
 
}

