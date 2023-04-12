#include<iostream>

using namespace std;

 void carregaVetor(int vetor[], int X){       // funcão para carregar o vetor, identificando qual é o tamanho do vetor
     int i;
          for(i=0;i<X;i++){
              printf("Digite o valor do vetor na posição %d\n",i+1);
              scanf("%d",&vetor[i]);
          }
  }
 void imprimeVetor(int vetor[],int X){       // funcao para impimir o vetor
      int i;
        for(i=0;i<X;i++){
          printf("%d",vetor[i]);
          printf("  ");
        }
     printf("\n");
  }
  
   
   void imprimeVetor3(int vetor[], int X){    // funcao para descobrir se a numeoros dentro do vetor divisivel por 3 
       int i, aux=0;
         for (i=0;i<X;i++){
               if(vetor[i] % 3 == 0){
                 aux++;
				 printf("%d",vetor[i]);
                 printf("  ");
               }
         }
           printf("\n");
         if(aux == 0)
          printf("\nNao ah numeros divisiveis por 3\n");
   }


int main(){
	
	int X, opcao;
	
       printf("Digite o tamanho do vetor\n");                  // primeira pergunta para descobrir o tamanho do vetor 
       scanf("%d",&X);
       
   do{    
   
      int vetor[X];
       system("cls");
       printf("------- MENU ---------\n");
       printf("\n 1 Para caregar o vetor\n");
       printf(" 2 Para mostrar o vetor\n");
       printf(" 3 para imprimir os valores que são divisivel por 3 \n");
       printf(" 4 para aumentar o tamanho do vetor\n");
       printf(" 0 para sair\n");  
       
	   scanf("%d",&opcao);
	switch(opcao){
           
           case 1: system("cls");
                   printf("\n-----Carregando o vetor-------\n");
                   carregaVetor(vetor,X);
                   system("pause");
                   break;
                   
	       case 2: system("cls");
                   printf("--------Mostrando o vetor--------\n");
                   imprimeVetor(vetor,X);
                   system("pause");
                  break;
                  
           case 3: system("cls");
                   printf("--------Impromindo os valores que sao divisiveis por 3-------\n");
                   imprimeVetor3(vetor,X);
                   system("pause");
                   break;
           case 4: system("cls");
                   printf("Digite o tamanho do vetor\n");
                   scanf("%d",&X);
                   system("pause");
                   break;
    }
	
  }while(opcao!=0);
	
	return 0;
}
