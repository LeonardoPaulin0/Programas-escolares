#include <stdio.h>

int main(void) {

   float v1, v2, resul;
   int op;
      
     printf("-----------CALCULADORA-----------\n----Digite os valores para opera��o----\n");
     printf("\n valor 1 :");
     scanf("%f",&v1);
    
     printf("\n Valor 2 :");
     scanf("%f",&v2);
    
     printf("\n\nDigite a opcao que deseja calcular\n 1 = soma\n 2 = subtra��o\n 3 = Multiplica��o\n 4 = divis�o\n\n***Lembrando que nao existe divis�o por 0 ***\n");
    scanf("%d",&op);

         switch(op)
           {
            case 1:
              resul = v1 + v2;
              printf("A Soma de %.f e %.f eh %.f",v1,v2,resul);
              break;
             
            case 2: 
              resul = v1 - v2;
              printf("A subtra��o de %.f e %.f eh %.f",v1,v2,resul);
              break;
             
            case 3:
              resul = v1 * v2;
              printf("A multiplica��o de %.f e %.f eh %.f", v1,v2,resul);
              break;
             
            case 4:
               if (v2 == 0)
                 printf("Impossivel divis�o por 0");
              else {
                resul = v1 / v2;
                printf("A divis�o de %.f e %.f eh %.f",v1, v2, resul);
                break;

              default : printf("Op��o n�o existe!!");
              }
              
           }
  return 0;
}
