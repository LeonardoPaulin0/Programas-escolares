/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    // primeiro é preciso adicionar valores as variaveis da linha e coluna da matriz 
   int i, j, linhas, colunas;
 
   printf("Digite quantas linhas a matriz deve ter: ");
   scanf("%d",&linhas);
   
   printf("\nDigie quantas colunas a matriz deve ter: ");
   scanf("%d",&colunas);

   // Após colher os dados das linhas e colunas. É declarado a matriz com seus respecivos valores:  
   float matriz[linhas][colunas];  
     
     // Percorrendo a matriz e adiconado o 0 em cada posição
       for(i=0; i<linhas; i++){    // linhas da matriz 
           for(j=0; j<colunas; j++)   // colunas da matriz 
              matriz[i][j] = 0;
          }
      
       // Imprimendo a matriz com a quantidade de linhas e colunas informadas
      for(i=0; i<linhas; i++){
          printf("\n");                 // pula a linha da matriz 
           for(j=0; j<colunas; j++)
               printf("  %.f",matriz[i][j]);  // é inserido um espaço e o valor da posição da coluna 
      }
    printf("\n\n");
    
     return 0;
}
