
/*5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:

a) Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo;
b) Evite usar fun��es prontas, como, por exemplo, reverse;?*/


#include<iostream>
//#include<string.h>
//#include<stdlib.h>

using namespace std;

int main(){
	
	
	char nome[10] = "leonardo";
	char inverso[8];
	int i,j=0;

	for(i=strlen(nome)-1; i>=0; i--){
        inverso[j]=nome[i];
		j++;
   
  }
	inverso[j] = '\0';
	
	printf(" leonardo inverso = %s\n",inverso);
	
	return 0;
}
