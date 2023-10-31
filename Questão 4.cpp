/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define max 3


using namespace std;

int main(){
    
   int matriz[max][max];
   int i, j;
   int Npares;
   
       // Percorrendo a matriz para incrementar os valores 
   for(i=0; i < max; i++){
        for(j=0; j < max; j++){             // pedindo para o usuario digitar o valor da posição tal da matriz 
            printf("\nDigite o valor da matriz na posição [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);     // adicionando o valor na posição
                    
        if(matriz[i][j] % 2 == 0)    // verificando quantos valores são divisiveis por 2 que resulta em 0  
          Npares++;                // para descobrir a quantidade de valores pares
        }
   }    
    
    printf("\n\t\t  MATRIZ:\n"); 
    for(i=0; i < max; i++){             // imprimindo a matriz selecionando a linha primerio 
        printf("\n\t\t");
        for(j=0; j<max; j++){           // e incrementando os valores atraves das colunas 
            printf("  %d",matriz[i][j]);
        }
    }
    
    printf("\n\nForam localizadas %d numeros pares.",Npares);
    
    
     return 0;
}

