#include <stdio.h>

int main(){
	
	float somaN, nota, media;
	int i,Qnota;
	
	printf("\nDigite a quantidades de notas para a media \n");
	scanf("%d",&Qnota);
	
	for(i=1; i <= Qnota; i++){
	  	
	  	nota=0;
	  	printf("\nDigite a %d* nota \n",i);
	  	scanf("%f",&nota);
	  	
	  	somaN = somaN + nota;
	  	
	  	
	  }
	
		 media = somaN / Qnota;
		 
		 printf("A media das %d notas sao %.1f",Qnota,media);
	
	
	return 0;
}
