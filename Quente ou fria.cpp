/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
 	
     int temperatura[10], i;
    
      for (i=0;i<10;i++){
          
          printf("Digite a %d temperatura ",i+1);
          scanf("%d",&temperatura[i]);
        
      }
       
        printf("\n");
        
        
           for(i=0;i<10;i++){
               
               if(temperatura[i] >20)
                 printf(" temperturas %d são quentes\n",i+1);
              else 
                printf(" temperaturas %d são frias \n",i+1);           }
       
     
	
	return 0;
}
