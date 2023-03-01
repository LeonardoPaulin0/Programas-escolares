#include <stdio.h>

int main(void) {

   float v1, v2, resul;
   int op;
      
     printf("-----------CALCULADORA-----------\n----Digite os valores para operação----\n");
     printf("\n valor 1 :");
     scanf("%f",&v1);
    
     printf("\n Valor 2 :");
     scanf("%f",&v2);
    
     printf("\n\nDigite a opcao que deseja calcular\n 1 = soma\n 2 = subtração\n 3 = Multiplicação\n 4 = divisão\n\n***Lembrando que nao existe divisão por 0 ***\n");
    scanf("%d",&op);

         switch(op)
           {
            case 1:
              resul = v1 + v2;
              printf("A Soma de %.f e %.f eh %.f",v1,v2,resul);
              break;
             
            case 2: 
              resul = v1 - v2;
              printf("A subtração de %.f e %.f eh %.f",v1,v2,resul);
              break;
             
            case 3:
              resul = v1 * v2;
              printf("A multiplicação de %.f e %.f eh %.f", v1,v2,resul);
              break;
             
            case 4:
               if (v2 == 0)
                 printf("Impossivel divisão por 0");
              else {
                resul = v1 / v2;
                printf("A divisão de %.f e %.f eh %.f",v1, v2, resul);
                break;

              default : printf("Opção não existe!!");
              }
              
           }
  return 0;
}
