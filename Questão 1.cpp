/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   float media=0, soma=0;
   float matriz[3][5];
   int i,j;
   
   // Madeira de armazenar dados sem que o usuario digite:
   matriz[0][0] = 5;
   matriz[0][1] = 4.5;
   matriz[0][2] = 7;
   matriz[0][0] = 5.2;
   matriz[0][1] = 6.1;  
   matriz[1][2] = 2.1;
   matriz[1][0] = 6.5;
   matriz[1][1] = 8;
   matriz[1][2] = 7;
   matriz[1][0] = 6.7;
   matriz[2][1] = 8.6;
   matriz[2][2] = 7;
   matriz[2][0] = 9.1;
   matriz[2][1] = 8.7;
   matriz[2][2] = 9.3;
   
        // caminhando pela matriz, somando e incrementando em apenas uma variavel 
   for(i=0;i<3;i++){
       for(j=0;j<5;j++){
           soma += matriz[i][j];
       }
   }
   media = soma / 15;
   
   printf("A media da classe eh de %.2f ",media);
   
     return 0;
}
