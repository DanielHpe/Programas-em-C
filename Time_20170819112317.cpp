#include <iostream>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int funcao(int N)
{
	int resultado = 0;
	
 	for(int i = 0; i < N; i++ ){
 		for(int j = 0; j < N; j++){ 
		 	resultado++;
 		}
 		
 		return resultado;
 	}
}

int maiorValor(int V[], int n){
	
	int auxiliar = V[0];
	
//	printf("Digite o tamanho do vetor: ");
//	scanf("%d \n\n", &numero);
	
//	int vetor[numero];
//	int auxiliar = vetor[0];
	
	for(int i = 0; i < n; i++){
		if(V[i] > auxiliar){
			auxiliar = V[i];
		}
	}
	
	printf("\n\nO maior valor e: %d \n\n", auxiliar);
	
	
}

int pesquisa(int V[]){
	
}

main() {

  double ti,tf,tempo; // ti = tempo inicial // tf = tempo final
  int n;
  ti = tf = tempo = 0;
  timeval tempo_inicio,tempo_fim;
  int i;
  int numero;
  
 // cout << "Informe n:";
//  cin >> n;
  
  //Tempo inicial
  gettimeofday(&tempo_inicio,NULL);
  
  //Execução da função
//  funcao(n);

    printf("Digite o tamanho do vetor: ");
    scanf("%d \n\n", &numero);
    
	int	vetor[numero];

  //Inserindo no Vetor
  printf("Vetor: ");
  for(i = 0; i < numero; i++){
	  vetor[i] = rand() % 100;
	  printf("%d ", vetor[i]);
  }
	
  //Chama a funcao calcula maiorValor	
  maiorValor(vetor, numero);
  
  //Pesquisa X
//  pesquisar(vetor);

  //Tempo final
  gettimeofday(&tempo_fim,NULL);
  tf = (double)tempo_fim.tv_usec + ((double)tempo_fim.tv_sec * (1000000.0));
  ti = (double)tempo_inicio.tv_usec + ((double)tempo_inicio.tv_sec * (1000000.0));
  tempo = (tf - ti) / 1000;
  
  cout << "Tempo gasto em milissegundos para execucao da funcao: " << tempo << endl;
  
}
