#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
int main(void)
{
	printf("\n\nFunção rand que gera sempre os mesmos valores\n");
    for(int i=1 ; i <= 10 ; i++) 
        printf("Numero %d: %d\n",i, rand());
        
    printf("\n\nFunção srand é alimentada para gerar novos valores\n");
	srand( (unsigned)time(NULL) );
    for(int i=1 ; i <= 10 ; i++) 
        printf("Numero %d: %d\n",i, rand());
     
    printf("\n\nFunção rand dentro de um intervalo\n");
    srand( (unsigned)time(NULL) );
    for(int i=1 ; i <= 10 ; i++) 
    	printf("Numero %d: %d\n",i, rand() % 25);
     
     
 
}

