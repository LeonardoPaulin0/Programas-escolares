/*1 Carga da matriz (registrar as temperaturas na matriz)
2 Mostra matriz
3 Calcula somatória das temperaturas
4 Calcula média das temperaturas
5 Calcula a quantidade das temperaturas da diagonal secundária que são maiores do que 25.*/

#include <iostream>
#define MAX 3


using namespace std;



void carregaMatriz(float m[][MAX]){                  // Carga da matriz (registrar as temperaturas na matriz)
   int i,j;
 for(i=0;i<MAX;i++){
     for(j=0;j<MAX;j++){
         printf("Digite as temperaturas da matriz\n");
          scanf("%f",&m[i][j]);
   } 
  }
}
void mostraMatriz (float m[][MAX]){                 // imprime a matriz
    int i,j;
     for(i=0;i<MAX;i++){
      printf("\n");
        for(j=0;j<MAX;j++){
          printf("%.2f\t",m[i][j]);
      }
     }
    printf("\n\n");
}
 void somaMatriz (float m[][MAX]){                  // Calcula somatória das temperaturas
 	 float soma;
 	 int i,j;
 	   for(i=0;i<MAX;i++){
 	   	 for(j=0;j<MAX;j++){
 	   	   soma += m[i][j];	
		  }
		} 
   printf("\nA soma das temperatuas da matriz eh %.2f\n\n",soma);
 }
  void mediaMatriz (float m[][MAX]){                // Calcula média das temperaturas
  	   float soma, media;
  	   int i, j;
  	    for(i=0;i<MAX;i++){
 	   	   for(j=0;j<MAX;j++){
 	   	    soma += m[i][j];	
		  }
		} 
		media = soma/(MAX*MAX);
		printf("\nA media as temperaturas eh %.2f\n\n",media);
  }

   void MaiorQ25 (float m[MAX][MAX]){                 // Calcula a quantidade das temperaturas da diagonal secundária que são maiores do que 25.
  	int i, j, maiores;
  	    for(i=0;i<MAX;i++){
 	   	   for(j=0;j<MAX;j++){
 	   	     if(m[i][MAX-j+1] > 25)
                maiores++; 	  
		  } 
		} 
   	 printf("\n A quantidade de temperatura maior que 25 eh : %d\n",maiores);
   	
   }


 int main(){
    int opcao;
	float matriz[MAX][MAX];
do{
      system("cls||clear");
      printf("\n------Menu das operações------\n\n"); 
	  printf("[1] para carregar a matriz\n");
	  printf("[2] para impimir a matriz\n");
	  printf("[3] para somar todas as temperaturas da matriz\n");
	  printf("[4] para a media das temperaturas\n");
	  printf("[5] para calcular a quantidade das temperaturas da diagonal secundária que são maiores do que 25.\n");
	  printf("[0] para sair \n");
      scanf("%d",&opcao);


    switch(opcao){



         case 1: system("cls||clear");
                  printf("------Carrega matriz-------\n");
                  carregaMatriz(matriz);
                  system("pause");
                break;
         case 2: system("cls||clear");
                  printf("-----Imprimindo a Matriz------\n");
                  mostraMatriz(matriz);
                  system("pause");
                break;
         case 3: system("cls||clear");
                  printf("-----Somando a Matriz------\n");
                  somaMatriz(matriz);
                  system("pause");
                break;
		 case 4: system("cls||clear");
                  printf("-----Media da Matriz------\n");
                  mediaMatriz(matriz);
                  system("pause");
                break;    
		 case 5: system("cls||clear");
		         printf("------Quantidade de temperaturas da diagonal secundaria maior que 25 ------ \n");
				 MaiorQ25(matriz);
				 system("pause");
				break;  
    }



}while(opcao!=0);
   return 0;
}
