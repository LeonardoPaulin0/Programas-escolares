/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 4

// limpar a tela system("cls || clear")
  
int main()
{
    float matriz1[MAX][MAX], matriz2[MAX][MAX];
    float matrizResul[MAX][MAX];
    int i, j;
    
        printf("\tDigite os valores da 1* matriz na\n ");
    for(i=0;i<MAX;i++){
      for(j=0;j<MAX;j++){
        printf("%d,%d:\t",i,j);	    
	    scanf("%f",&matriz1[i][j]);
	  }   
	}	
    
       printf("\tDigite os valores da 2* matriz na\n ");
    for(i=0;i<MAX;i++){
      for(j=0;j<MAX;j++){
        printf("%d,%d:\t",i,j);	    
	    scanf("%f",&matriz2[i][j]);
	  }   
	}	
      
      for(i=0;i<MAX;i++){
          for(j=0;j<MAX;j++){
             
             if(matriz1[i][j] == matriz2[i][j])
               matrizResul[i][j] = matriz1[i][j];
             else 
               matrizResul[i][j] = 0;
         }
      }
       
       printf("Os valores iguais da Matriz1 e da Matriz2 eh : \n  ");
      for(i=0;i<MAX;i++){
          printf("\n");
          for(j=0;j<MAX;j++){
           printf("%.f",matrizResul[i][j]);     
              printf("\t");
         }
       }




    return 0;
}


/*for(i=0;i<MAX;i+2){
    for(j=0;j<MAX;j++){
        if (matriz[i][j] > maiorLinhaPar){ 
           maiorLinhaPar = matriz[i][j];*/
        
        
    }
}
