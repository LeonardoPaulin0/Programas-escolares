#include<iostream>  


using namespace std;


 int menor(int vet[]){
 	int i; 
 	int menor;
 	
 	menor = vet[0];
 	
 	 for(i=0;i<10;i++){
 	 	if(vet[i]<menor)
 	 	  menor = vet[i];
	  }
	  return menor;
 }
 

  int main(){
  
  int vet[10];
  int i, Menor;
  float triplo; 
  for(i=0;i<10;i++){
    printf("\nDigite os valores da posicao %d do vetor : ",i);
     scanf("%d",&vet[i]);
 }
  for(i=0;i<10;i++){
    if(i % 2 == 0){
	} else 
	  printf("\n%d",vet[i]);   
  }
  
  
      Menor = menor(vet);
  printf("\nO menor numero eh %d ",Menor);
  
  for(i=0;i<10;i++){
  	if(vet[i] % 2 == 0){
  		 triplo = vet[i] * 3;
   printf("\nO valor %d foi triplicado para %f ",vet[i], triplo);
	  }
  	
  }
  
  
  
  
  return 0; 
  
  
 }
