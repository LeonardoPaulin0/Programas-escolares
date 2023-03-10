#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	
      // variaveis 	*MAIOR E MENOR*
    float imcMaior, imcMenor, pesoMaior, pesoMenor, altuMaior, altuMenor; 
    
      // variaveis das *SOMAS para as MEDIA* dos pesos, imcs e altura
    float somaImc, somaPeso, somaAltu, mediaImc, mediaPeso, mediaAltu;
    
      //variaveis armazenar *VALORES* e outras necesidades
    float peso, altu, imc, contador=1;
	char op;  
    
    
    
	    printf("\n____Paciente %.f_____\n",contador);
	    printf("Digite o peso do paciente : ");
	    scanf("%f",&peso);
	    printf("Digite a altura do paciente : ");
	    scanf("%f",&altu);
	    
		    imc = peso/(altu*altu);
		printf("\nO IMC do paciente %.f eh : %.2f\n",contador,imc);
		
		imcMaior = imc;
		imcMenor = imc;
		pesoMaior= peso;
		pesoMenor= peso;
		altuMaior=altu;
		altuMenor=altu;
		
		somaPeso += peso;
		somaAltu += altu;
	    somaImc += imc;
	
     printf("\nDeseja realizar mais um calculo IMC ? \n[s]Sim ou [n]Nao\n");
     scanf(" %c",&op);
     
		
		while(op != 'n'){
		
			 contador++;
			 peso = 0;
			 altu = 0;
			 imc = 0;
			
		printf("\n____Paciente %.f_____\n",contador);
	    printf("Digite o peso do paciente : ");
	    scanf("%f",&peso);
	    printf("Digite a altura do paciente : ");
	    scanf("%f",&altu);
	    
		    imc = peso/(altu*altu);
		printf("\nO IMC do paciente %.f eh : %.2f\n",contador,imc);	
		
		// somando os dados para media
		
		somaPeso += peso;
		somaAltu += altu;
	    somaImc += imc;
			
			if(peso > pesoMaior)
			  pesoMaior = peso;
			if(peso < pesoMenor)
			  pesoMenor = peso;
		   
		    if(altu > altuMaior)
		       altuMaior = altu;
		    if(altu < altuMenor)
		       altuMenor = altu;
		       
		    if(imc > imcMaior)
		       imcMaior = imc;
		    if(imc < imcMenor)
		       imcMenor = imc;
		       
		        printf("\nDeseja realizar mais um calculo IMC ? \n[s]Sim ou [n]Nao\n");
                scanf(" %c",&op);
 			
	}
		
		 mediaPeso = somaPeso/contador;
		 mediaAltu = somaAltu/contador;
		 mediaImc = somaImc/contador;
		
	printf("\n FORAM AO TOTAL %.f PACIENTES \n",contador);
	printf("\n____ OS VALORES DE PESO SAO____\n Maior peso : %.f\n Menor peso : %.f\n",pesoMaior, pesoMenor);
	printf("\n____OS VALORES DE ALTURA SAO____\n Maior altura : %.2f\n Menor altura : %.2f\n",altuMaior,altuMenor);
	printf("\n____OS VALORES DE IMC SAO____\n Maior IMC : %.2f\n Menor IMC : %.2f\n",imcMaior,imcMenor);
	
	printf("\nAs media de peso sao : %.2f\n",mediaPeso);
	printf("As media de altura sao : %.2f\n",mediaAltu);
	printf("As media de IMC sao : %.2f\n",mediaImc);
	
	
	
	
	return 0;
}
