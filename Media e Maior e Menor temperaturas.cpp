/******************************************************************************
Altere o programa anterior para imprimir a média das temperaturas, a maior e a menor temperatura.
*******************************************************************************/

#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
 	
     int temperatura[10], i;
     float soma, media;
     float maior, menor;
    
            for (i=0;i<10;i++){
              
              printf("Digite a %d temperatura ",i+1);
              scanf("%d",&temperatura[i]);
              soma+=temperatura[i];
          }
      
      
    maior = temperatura[1];
    menor = temperatura[1];
    media = soma/10;
        
            for(i=0;i<10;i++){
                
                printf("\n");
                if (temperatura[i]> maior)
                  maior = temperatura[i];
                if (temperatura[i] < menor)
                  menor = temperatura[i];
            }      
                    
              printf("A maior temperatura eh %.2f \n",maior);
              printf("A menor temperatura eh %.2f \n",menor);
              printf("\n A media das temperaturas eh %.2f ",media);
             
	
	return 0;
}
