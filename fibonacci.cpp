#include<iostream>

using namespace std;
 
 
int main(){
	
 int a, b, aux, i, n, codigo;
 a=0;
 b=1;
 codigo=0;
 
 
	printf("digite um numero: ");
	scanf("%d", &n);
	printf("serie de fibonacci: \n");
	printf("%d\n", a);

	 for(i=0;i<=n;i++){
		aux=a+b;
		a=b;
		b=aux;
		printf("%d\n", aux);
		
		if(aux==n)
		  codigo++;
}
      if (codigo>=1)
         printf("\nO numero %d pertence a sequencia",n);
      else
         printf("\nO numero %d nao pertece a sequencia",n);

return 0;
}
