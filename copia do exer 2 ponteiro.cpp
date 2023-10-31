#include <iostream>
#define MAX 10

using namespace std;

  int menu(){
  	int op;
	   system("clear");
  	 printf("-------------M E N U ------------\n");
  	 printf("1 para inserir o elemento \n");
  	 printf("2 para remover um elemento\n ");
  	 printf("3 para imprimir o vetor\n");
  	 printf("0 para sair ");
  	 scanf("%d",&op);
  	 system("pause");
  return op;
 }

   void inserir(int v[], int *f, int e){
   	 
   	  if(*f<=MAX-2){
   	  	  *f = *f + 1;
   	  	  v[*f]=e;
   	  	   printf("\nElemento inserido com sucesso\n");
		 }
	   else {
	   	  printf("\nNão foi possivel inserir o elemento, vetor cheio\n");
	   }
	   system("pause");
   }
   
void remover(int v[], int *f, int e){
	  
   if(*f>=0){
    *f= *f-1;
    printf("\nelemento removido com sucesso\n");
  }
   else 
    printf("Sem elemnto para remover");
    
     system("pause");
}

void imprimir(int v[],int f){
   int i;
   system("clear");
   printf("Imprimindo o vetor \n\n");
   
   for(i=0;i<=f;i++)
     printf("%d\t",v[i]);
     printf("\n\n");
     system("pause");
}


int main(){
	int fim = -1, op, elemento, v[MAX];
	
	do{ 
		
		op=menu();
		
		switch(op){
			
			case 1: system("cls");
			        printf("\n----------inserindo elemento ------------\n\n");
			        printf("\nDigite o elemento que queria inserir : ");
			        scanf("%d",&elemento);
			        inserir(v,&fim,elemento);
			         break;
			case 2: system("cls");
			        remover(v,&fim,elemento);
			        break;
			case 3: system("cls");
			        imprimir(v,fim);
			        break;
				
		}
		
		
		
		
		
	}while(op!= 0);
		
	return 0;
}
