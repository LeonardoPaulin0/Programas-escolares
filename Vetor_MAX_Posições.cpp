/*Escreva um programa que leia um vetor de MAX posições(constante) números inteiros e 
depois faça uma cópia do vetor1 para um segundo vetor, imprimindo os dois vetores na tela.

Altere o programa anterior para que a cópia aconteça com 
os elementos invertidos e escreva novamente os vetores na tela.*/

#include<iostream>
#define MAX 5

using namespace std;

int main(){
	
	
	float vetor1[MAX], vetor2[MAX];
	int i, j;
	vetor2[i]=vetor1[i];
	for(i=0;i<MAX;i++){
		
		printf("Digite os valores do vetor %d: \n",i+1);
		scanf("%f",&vetor1[i]);	
	}
	 
	//         4     4 
	for(i=0,j=MAX-1;i<MAX,j>=0;i++,j--){
		
		vetor2[j]=vetor1[i];
	}
	
	
	
	
   // for(i=0;i<MAX;i++)
   //   vetor2[i]=vetor1[i];

		
		printf("Os valores do vetor 1 sao :\n");
	for(i=0;i<MAX;i++)
        printf("%.f ",vetor1[i]);
	
	    printf("\nImpressao do vetor 1 para o vetor 2 sao :\n");
	for(i=0;i<MAX;i++)
        printf("%.f ",vetor2[i]);
	
	
	
	
	return 0;
}
