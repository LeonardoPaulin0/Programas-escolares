#include <stdio.h>

int main(void) {
   int valor;

  
  printf("Digite um valor para verificar o seu qual é o seu intevalo \n");
  scanf("%d",&valor);
    
       if ((valor >= 7) && (valor <=10))
          printf("\nO valor %d esta no intevalo A entre 7 e 10\n",valor);
  
       if((valor >=28) && (valor<=30))
          printf(" \nO valor %d esta no intervalo B entre 28 e 30\n",valor);
  
       if ((((valor > 35 ) && (valor<=40) || (valor >=90) && (valor <= 100))))
          printf("\nO valor %d esta no intervalo C entre 35 e 40 ou 90 e 100\n", valor);
   
       if (((((valor == 100) || (valor>=200) && (valor<=300) || (valor > 500) && (valor<=600)))))
          printf("\nO valor %d esta entre o intervalo D de 100 ou 200 entre 300 ou 500 e 600\n", valor);
    
    
  return 0;
}
